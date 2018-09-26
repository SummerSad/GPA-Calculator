#include <stdio.h>

int main(void)
{
    printf("So tin chi - Diem\n");
    printf("Nhap 0 0 de ket thuc\n");
    int tin_chi;
    float diem;
    float tong_diem = 0;
    int tong_tin_chi = 0;

    do {
        scanf("%d %f", &tin_chi, &diem);
        tong_diem += diem * tin_chi;
        tong_tin_chi += tin_chi;
    } while (tin_chi != 0);

    printf("GPA thang 10 %f\n", tong_diem / tong_tin_chi);
    printf("GPA thang 4 %f\n", (tong_diem / tong_tin_chi) / 10 * 4);

    return 0;
}
