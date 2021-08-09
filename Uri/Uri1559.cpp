//Uri1559

#include <stdio.h>

int r[100000][4];

void possibilidades (int m[4][4], int n){
	int i, j, conta2048=0;
	
	for(i=0; i<4; i++){
        for(j=0; j<4; j++){
			if(m[i][j]==0){
                    //conta++;
            }else{
				if(m[i][j]==2048) conta2048 = 1;
                if((i!=3) && (m[i][j]==m[i+1][j] || m[i+1][j] == 0)) r[n][0] = 1;   // DOWN
                if((j!=0) && (m[i][j]==m[i][j-1] || m[i][j-1] == 0)) r[n][1] = 1;   // LEFT
                if((j!=3) && (m[i][j]==m[i][j+1] || m[i][j+1] == 0)) r[n][2] = 1;   // RIGHT
                if((i!=0) && (m[i][j]==m[i-1][j] || m[i-1][j] == 0)) r[n][3] = 1;   // UP
			}
		}
	}
		if(conta2048 == 1){
		for(i=0; i<4; i++) r[n][i] = 0;}
		

		
	}


int main (){
	int  i, j, k, n, lm;
	int m [4][4];
	scanf("%d",&n);
	
	for(lm=0;lm<n;lm++){
		for(i=0; i<4; i++){
                for(j=0; j<4; j++){
                    scanf("%d", &m[i][j]);
                }
            }
		possibilidades(m,lm);
	}
		for(k=0; k<n; k++){
            if(r[k][0]==1) printf("DOWN");
            if(r[k][1]==1){
                if(r[k][0]==1) printf(" ");
                printf("LEFT");
            }
            if(r[k][2]==1){
                if(r[k][0]==1 || r[k][1]==1) printf(" ");
                printf("RIGHT");
            }
            if(r[k][3]==1){
                if(r[k][0]==1 || r[k][1]==1 || r[k][2]==1) printf(" ");
                printf("UP");
            }
            if(r[k][0]==0 && r[k][1]==0 && r[k][2]==0 && r[k][3]==0) printf("NONE");
            printf("\n");
        }

    return 0;
	}