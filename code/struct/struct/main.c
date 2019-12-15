//Define stuct SVNM
//Ten[30], MSSV[8], Diem giua ki float, Diem cuoi ky float
//Diem tong ket = 60% * Diem cuoi ki + 40% * Diem giua ki

//Nhap thong tin lop 10sv(mang cau truc)

//In ra SV do hay khong, SV gioi nhat

#include <stdio.h>
#include <stdlib.h>

struct SVNM
{
    char ten[30];
    char MSSV[8];
    float DGK, DCK, DTK;
};

int main() {
    struct SVNM sinhVien[40];
    int i;
    
    for (i = 0; i < 3; i++)
    {
        printf("Nhap ten sinh vien [%d]: ", i);
//        fflush(stdin);
//        gets(sinhVien[i].ten);
        scanf("%s", sinhVien[i].ten);
        
        printf("Nhap ma so SV [%d]: ", i);
//        fflush(stdin);
//        gets(sinhVien[i].MSSV);
        scanf("%s", sinhVien[i].MSSV);
        
        printf("Nhap diem giua ky [%d]: ", i);
        scanf("%f", &sinhVien[i].DGK);
        
        printf("Nhap diem cuoi ky [%d]: ", i);
        scanf("%f", &sinhVien[i].DCK);
        
        sinhVien[i].DTK = sinhVien[i].DGK * 40 / 100 + sinhVien[i].DCK * 60 / 100;
    }
    
    printf("Nhung sinh vien do: \n");
    
    for (i = 0; i < 3; i++)
    {
        if ((sinhVien[i].DGK >= 3) && (sinhVien[i].DCK >= 3) && sinhVien[i].DTK >=4)
        {
            printf("Sinh vien %s - MS: %s - DGK: %f - DCK: %f - DTK: %f\n", sinhVien[i].ten, sinhVien[i].MSSV, sinhVien[i].DGK, sinhVien[i].DCK, sinhVien[i].DTK);
        }
    }
    
    struct SVNM bestStudent = sinhVien[0];
    
    for (i = 1; i < 3; i++)
    {
        if (sinhVien[i].DTK > bestStudent.DTK)
        {
            bestStudent = sinhVien[i];
        }
    }
    
    printf("Sinh vien gioi nhat la: %s - MS: %s - Diem: %f\n", bestStudent.ten, bestStudent.MSSV, bestStudent.DTK);
}
