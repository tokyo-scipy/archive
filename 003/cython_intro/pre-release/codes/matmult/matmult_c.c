void matmult_c(int n, int m, int l,
            double A[n][l], double B[l][m], double C[n][m]){
    int i, j, k;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            C[i][j] = 0.0;
            for(k=0; k<l; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}
