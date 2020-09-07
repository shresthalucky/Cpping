#include <iostream>
using namespace std;

class Matrix{
	int row, col, m[5][5];
	public:
	class DimentionError{};
	Matrix(){
		row = 0;
		col = 0;
	}
	Matrix(int a, int b){
		row = a;
		col = b;
	}
	void getMatrix();
	void show();
	friend Matrix operator+(const Matrix&, const Matrix&);
	friend Matrix operator*(const Matrix&, const Matrix&);
};

void Matrix::getMatrix(){
	int i, j;
	cout << "Enter " << row << "x" << col << " matrix :"<< endl;
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			cin >> m[i][j];
		}
	}
}

void Matrix::show(){
	int i,j;
		for(i = 0; i < row; i++){
			for(j = 0; j < col; j++){
				cout << m[i][j] << " ";
			}
			cout << "\n";
		}
}

Matrix operator+(const Matrix &m1, const Matrix &m2){
	Matrix m;
	if(m1.row != m2.row || m1.col != m2.col){
		throw Matrix::DimentionError();
	}
	m.row = m1.row;
	m.col = m1.col;
	int i,j;
	for(i = 0; i < m1.row; i++){
		for(j = 0; j < m1.col; j++){
			m.m[i][j] = m1.m[i][j] + m2.m[i][j];
		}
	}
	return m;
}

Matrix operator*(const Matrix &m1, const Matrix &m2){
	Matrix m;
	int i,j;
	if(m1.row != m2.row || m1.col != m2.col){
		throw Matrix::DimentionError();
	}	
	m.row = m1.row;
	m.col = m2.col;
	for(i = 0; i < m.row; i++){
		for(j = 0; j < m.col; j++){
			for(int k = 0; k < 3; k++){
				m.m[i][j] += m1.m[i][k]*m2.m[k][j];
			}
		}
	}
	return m;
}

int main(){
	Matrix m1(3, 3), m2(2, 2), m3;
	try{
		m1.getMatrix();
		m2.getMatrix();
		m3 = m1+m2;
		m3.show();
		m3 = m1 * m2;
	}catch(Matrix::DimentionError){
		cout << "DimentionError" << endl;
	}
	m3.show();
	return 0;
}