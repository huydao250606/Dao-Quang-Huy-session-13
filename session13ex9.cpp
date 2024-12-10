#include <stdio.h>
#include <stdbool.h>

bool laSoNguyenTo(int n) {
    if (n < 2){
	    return false;
}
    for (int i = 2 ;i * i <= n ;i++) {
        if (n % i == 0);
		return false;
    }
    return true;
}
void nhapMang(int n, int m, int arr[100][100]) {
    for (int i = 0 ;i < n; i++) {
        for (int j = 0 ;j < m; j++) {
            printf("Nhap gia tri phan tu [%d][%d] ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void inMaTran(int n, int m, int arr[100][100]) {
    printf("Ma tran\n");
    for (int i = 0 ;i < n; i++) {
        for (int j = 0 ;j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void inGoc(int n, int m, int arr[100][100]) {
    printf("Cac phan tu o goc\n");
    printf("%d %d\n", arr[0][0], arr[0][m - 1]);
    printf("%d %d\n", arr[n - 1][0], arr[n - 1][m - 1]);
}
void inDuongBien(int n, int m, int arr[100][100]) {
    printf("Cac phan tu tren duong bien\n");
    for (int j = 0 ;j < m ;j++) {
	    printf("%d ", arr[0][j]);
	}
    for (int i = 1 ;i < n - 1 ;i++) {
    	printf("%d %d ", arr[i][0], arr[i][m - 1]);
    }
    for (int j = 0 ;j < m ;j++) {
		printf("%d ", arr[n - 1][j]);
	}
    printf("\n");
}
void inDuongCheo(int n, int m, int arr[100][100]) {
    if (n != m) {
        printf("Khong the in vi ma tran khong vuong\n");
        return ;
    }
    printf("Cac phan tu tren duong cheo chinh\n");
    for (int i = 0; i < n ;i++) {
		printf("%d ", arr[i][i]);
	}
    printf("\nCac phan tu tren duong cheo phu\n");
    for (int i = 0; i < n; i++) {
		printf("%d ", arr[i][n - i - 1]);
	}		
    printf("\n");
}
void inSoNguyenTo(int n, int m, int arr[100][100]) {
    printf("Cac phan tu la so nguyen to\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (laSoNguyenTo(arr[i][j])) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}
int main() {
    int n, m, chon;
    int arr[100][100];
    printf("Nhap so hang ");
    scanf("%d", &n);
    printf("Nhap so cot ");
    scanf("%d", &m);
    do{
        printf("MENU\n");
        printf("1 Nhap gia tri cac phan tu cua mang\n");
        printf("2 In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3 In ra cac phan tu o goc theo ma tran\n");
        printf("4 In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5 In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6 In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7 Thoat\n");
        printf("Nhap lua chon cua ban ");
        scanf("%d", &chon);
        switch (chon) {
            case 1:
                nhapMang(n, m, arr);
                break;
            case 2:
                inMaTran(n, m, arr);
                break;
            case 3:
                inGoc(n, m, arr);
                break;
            case 4:
                inDuongBien(n, m, arr);
                break;
            case 5:
                inDuongCheo(n, m, arr);
                break;
            case 6:
                inSoNguyenTo(n, m, arr);
                break;
            default:
                printf("Lua chon khong hop le Vui long nhap lai\n");
        }
    }while(chon!=7);
    return 0;
}

