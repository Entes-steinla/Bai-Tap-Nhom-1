/*
Trần Nhật Tân - CD230137
Nguyễn Bảo Minh - CD230600
Phạm Bảo Lộc - CD230056
Nguyễn Sỹ Mạnh - CD230067
Đặng Nguyễn Bảo Linh - CD233494
*/

/*
Buoi 1 Loc1 - Loc2
Buoi 2 Loc1 - Linh2
Buoi 3 Linh1 - Manh2
Buoi 4 Manh1 - Manh2
Buoi 5 Minh1 - Minh2
Buoi 6 Minh1 - Tan2
Buoi 7 Tan1 - Tan2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

#define maxD 100
#define maxC 100
#define max1 100

// kiem tra so nguyen to
bool nguyento(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// kiem tra so chinh phuong
bool chinhphuong(int num)
{
    // Tính căn bậc hai của n
    int canbac2 = sqrt(num);
    // Nếu căn bậc hai là một số nguyên, n là số chính phương
    if (canbac2 * canbac2 == num)
    {
        return 1; // Trả về 1 nếu là số chính phương
    }
    else
    {
        return 0; // Trả về 0 nếu không phải số chính phương
    }
}

// Tính tổng các số nguyên tố trong mảng
int tongsonguyento(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; ++i)
    {
        if (nguyento(a[i]))
        {
            sum += a[i];
        }
    }
    return sum;
}

// Nguyen Bao Minh - CD230600
void nhapmanga2chieu_6_1_Minh_CD230600(int a_6_1_Minh_CD230600[][100], int m_6_1_Minh_CD230600, int k_6_1_Minh_CD230600)
{
    for (int i = 0; i < m_6_1_Minh_CD230600; i++)
    {
        for (int j = 0; j < k_6_1_Minh_CD230600; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a_6_1_Minh_CD230600[i][j]);
        }
    }
}

void xuatmanga2chieu_6_1_Minh_CD230600(int a_6_1_Minh_CD230600[][100], int m_6_1_Minh_CD230600, int k_6_1_Minh_CD230600)
{
    for (int i = 0; i < m_6_1_Minh_CD230600; i++)
    {
        for (int j = 0; j < k_6_1_Minh_CD230600; j++)
        {
            printf("a[%d][%d] = %d   ", i, j, a_6_1_Minh_CD230600[i][j]);
        }
        printf("\n");
    }
}

void nhapmangb2chieu_6_1_Minh_CD230600(int b_6_1_Minh_CD230600[][100], int k_6_1_Minh_CD230600, int n_6_1_Minh_CD230600)
{
    for (int i = 0; i < k_6_1_Minh_CD230600; i++)
    {
        for (int j = 0; j < n_6_1_Minh_CD230600; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b_6_1_Minh_CD230600[i][j]);
        }
    }
}

void xuatmangb2chieu_6_1_Minh_CD230600(int b_6_1_Minh_CD230600[][100], int k_6_1_Minh_CD230600, int n_6_1_Minh_CD230600)
{
    for (int i = 0; i < k_6_1_Minh_CD230600; i++)
    {
        for (int j = 0; j < n_6_1_Minh_CD230600; j++)
        {
            printf("b[%d][%d] = %d   ", i, j, b_6_1_Minh_CD230600[i][j]);
        }
        printf("\n");
    }
}

void xuatmangc2chieu_6_1_Minh_CD230600(int c_6_1_Minh_CD230600[][100], int m_6_1_Minh_CD230600, int n_6_1_Minh_CD230600)
{
    for (int i = 0; i < m_6_1_Minh_CD230600; i++)
    {
        for (int j = 0; j < n_6_1_Minh_CD230600; j++)
        {
            printf("c[%d][%d] = %d   ", i, j, c_6_1_Minh_CD230600[i][j]);
        }
        printf("\n");
    }
}

void matrantich_6_1_Minh_CD230600(int c_6_1_Minh_CD230600[][100], int a_6_1_Minh_CD230600[][100], int b_6_1_Minh_CD230600[][100], int m_6_1_Minh_CD230600, int k_6_1_Minh_CD230600, int n_6_1_Minh_CD230600)
{
    for (int i = 0; i < m_6_1_Minh_CD230600; i++)
    {
        for (int j = 0; j < n_6_1_Minh_CD230600; j++)
        {
            c_6_1_Minh_CD230600[i][j] = 0;
            for (int l = 0; l < k_6_1_Minh_CD230600; l++)
            {
                c_6_1_Minh_CD230600[i][j] += a_6_1_Minh_CD230600[i][l] * b_6_1_Minh_CD230600[l][j];
            }
        }
    }
}

// Tran Nhat Tan - CD230137
char nhap_mn_6_2_Tan_CD230137(char nhap_6_2_Tan_CD230137)
{
nhap_lai:
    scanf("%d", &nhap_6_2_Tan_CD230137);
    if (nhap_6_2_Tan_CD230137 <= 0 || nhap_6_2_Tan_CD230137 > maxC || nhap_6_2_Tan_CD230137 > maxD)
    {
        printf("\tNhap lai: ");
        goto nhap_lai;
    }
    return nhap_6_2_Tan_CD230137;
}

void NhapMang_6_2_Tan_CD230137(int a_6_2_Tan_CD230137[][maxC], char m_6_2_Tan_CD230137, char n_6_2_Tan_CD230137)
{
    for (char i_6_2_Tan_CD230137 = 0; i_6_2_Tan_CD230137 < m_6_2_Tan_CD230137; i_6_2_Tan_CD230137++)
    {
        for (char j_6_2_Tan_CD230137 = 0; j_6_2_Tan_CD230137 < n_6_2_Tan_CD230137; j_6_2_Tan_CD230137++)
        {
            printf("\ta[%d][%d] = ", i_6_2_Tan_CD230137 + 1, j_6_2_Tan_CD230137 + 1);
            scanf("%d", &a_6_2_Tan_CD230137[i_6_2_Tan_CD230137][j_6_2_Tan_CD230137]);
        }
    }
}

void XuatMang_6_2_Tan_CD230137(int a_6_2_Tan_CD230137[][maxC], char m_6_2_Tan_CD230137, char n_6_2_Tan_CD230137)
{
    for (char i_6_2_Tan_CD230137 = 0; i_6_2_Tan_CD230137 < m_6_2_Tan_CD230137; i_6_2_Tan_CD230137++)
    {
        for (char j_6_2_Tan_CD230137 = 0; j_6_2_Tan_CD230137 < n_6_2_Tan_CD230137; j_6_2_Tan_CD230137++)
            printf("\t%d", a_6_2_Tan_CD230137[i_6_2_Tan_CD230137][j_6_2_Tan_CD230137]);
        printf("\n");
    }
}

void MatrixIO_6_2_Tan_CD230137(int a_6_2_Tan_CD230137[][maxC], char m_6_2_Tan_CD230137, char n_6_2_Tan_CD230137)
{
    printf("\n   Nhap cac gia tri cua ma tran a:\n");
    NhapMang_6_2_Tan_CD230137(a_6_2_Tan_CD230137, m_6_2_Tan_CD230137, n_6_2_Tan_CD230137);
    printf("\n   In ma tran a ra man hinh:\n");
    XuatMang_6_2_Tan_CD230137(a_6_2_Tan_CD230137, m_6_2_Tan_CD230137, n_6_2_Tan_CD230137);
}

void MinRowMaxCol_6_2_Tan_CD230137(int a_6_2_Tan_CD230137[][maxC], char m_6_2_Tan_CD230137, char n_6_2_Tan_CD230137)
{
    printf("\n\tPhan tu nho nhat tren hang nhung lon nhat tren cot la:");
    char i_6_2_Tan_CD230137, j_6_2_Tan_CD230137, k_6_2_Tan_CD230137, indexMin_6_2_Tan_CD230137, count_6_2_Tan_CD230137;
    int MinRowMaxCol_6_2_Tan_CD230137;
    for (i_6_2_Tan_CD230137 = 0; i_6_2_Tan_CD230137 < m_6_2_Tan_CD230137; i_6_2_Tan_CD230137++)
    {
        indexMin_6_2_Tan_CD230137 = 0;
        MinRowMaxCol_6_2_Tan_CD230137 = a_6_2_Tan_CD230137[i_6_2_Tan_CD230137][0];
        for (j_6_2_Tan_CD230137 = 1; j_6_2_Tan_CD230137 < n_6_2_Tan_CD230137; j_6_2_Tan_CD230137++)
        {
            if (MinRowMaxCol_6_2_Tan_CD230137 > a_6_2_Tan_CD230137[i_6_2_Tan_CD230137][j_6_2_Tan_CD230137])
                indexMin_6_2_Tan_CD230137 = j_6_2_Tan_CD230137;
        }
        count_6_2_Tan_CD230137 = 0;
        MinRowMaxCol_6_2_Tan_CD230137 = a_6_2_Tan_CD230137[i_6_2_Tan_CD230137][indexMin_6_2_Tan_CD230137];
        for (k_6_2_Tan_CD230137 = 0; k_6_2_Tan_CD230137 < m_6_2_Tan_CD230137; k_6_2_Tan_CD230137++)
        {
            if (MinRowMaxCol_6_2_Tan_CD230137 < a_6_2_Tan_CD230137[k_6_2_Tan_CD230137][indexMin_6_2_Tan_CD230137])
                count_6_2_Tan_CD230137++;
        }
        if (count_6_2_Tan_CD230137 == 0)
            printf("\n\ta[%d][%d] = %d", i_6_2_Tan_CD230137, indexMin_6_2_Tan_CD230137, MinRowMaxCol_6_2_Tan_CD230137);
    }
}

void MaxRowMinCol_6_2_Tan_CD230137(int a_6_2_Tan_CD230137[][maxC], char m_6_2_Tan_CD230137, char n_6_2_Tan_CD230137)
{
    printf("\n\tPhan tu lon nhat tren dong nhung nho nhat tren cot la:");
    char i_6_2_Tan_CD230137, j_6_2_Tan_CD230137, k_6_2_Tan_CD230137, count_6_2_Tan_CD230137, indexMax_6_2_Tan_CD230137;
    int MaxRowMinCol_6_2_Tan_CD230137;
    for (i_6_2_Tan_CD230137 = 0; i_6_2_Tan_CD230137 < m_6_2_Tan_CD230137; i_6_2_Tan_CD230137++)
    {
        indexMax_6_2_Tan_CD230137 = 0;
        MaxRowMinCol_6_2_Tan_CD230137 = a_6_2_Tan_CD230137[i_6_2_Tan_CD230137][0];
        for (j_6_2_Tan_CD230137 = 1; j_6_2_Tan_CD230137 < n_6_2_Tan_CD230137; j_6_2_Tan_CD230137++)
        {
            if (MaxRowMinCol_6_2_Tan_CD230137 < a_6_2_Tan_CD230137[i_6_2_Tan_CD230137][j_6_2_Tan_CD230137])
                indexMax_6_2_Tan_CD230137 = j_6_2_Tan_CD230137;
        }
        count_6_2_Tan_CD230137 = 0;
        MaxRowMinCol_6_2_Tan_CD230137 = a_6_2_Tan_CD230137[i_6_2_Tan_CD230137][indexMax_6_2_Tan_CD230137];
        for (k_6_2_Tan_CD230137 = 0; k_6_2_Tan_CD230137 < m_6_2_Tan_CD230137; k_6_2_Tan_CD230137++)
        {
            if (MaxRowMinCol_6_2_Tan_CD230137 > a_6_2_Tan_CD230137[k_6_2_Tan_CD230137][indexMax_6_2_Tan_CD230137])
                count_6_2_Tan_CD230137++;
        }
        if (count_6_2_Tan_CD230137 == 0)
            printf("\n\ta[%d][%d] = %d", i_6_2_Tan_CD230137, indexMax_6_2_Tan_CD230137, MaxRowMinCol_6_2_Tan_CD230137);
    }
}

// Struct Tran Nhat Tan - CD230137
typedef struct
{
    int tuso_7_1_Tan_CD230137, mauso_7_1_Tan_CD230137;
} PhanSo_7_1_Tan_CD230137;
char nhap_n_7_1_Tan_CD230137(char n_7_1_Tan_CD230137)
{
    do
    {
        scanf("%d", &n_7_1_Tan_CD230137);
        if (n_7_1_Tan_CD230137 <= 0 || n_7_1_Tan_CD230137 > max1)
            printf("Nhập lại: ");
    } while (n_7_1_Tan_CD230137 <= 0 || n_7_1_Tan_CD230137 > max1);
    return n_7_1_Tan_CD230137;
}
void Nhap_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
    {
        printf("Nhập phân số thứ %d (mẫu số khác 0): ", i_7_1_Tan_CD230137 + 1);
        scanf("%d", &p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137);
        do
        {
            scanf("%d", &p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137);
            if (p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 == 0)
                printf("\tNhập lại mẫu số của phân số thứ %d: ", i_7_1_Tan_CD230137 + 1);
        } while (p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 == 0);
        if (p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 < 0 && p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 < 0)
        {
            p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 = abs(p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137);
            p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 = abs(p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137);
        }
        if (p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 < 0)
        {
            p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 = -p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137;
            p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 = abs(p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137);
        }
    }
}
void Xuat_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
        printf("  %d/%d", p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137, p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137);
}
int UCLN_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p)
{
    if (p.tuso_7_1_Tan_CD230137 < 0)
        p.tuso_7_1_Tan_CD230137 = abs(p.tuso_7_1_Tan_CD230137);
    if (p.mauso_7_1_Tan_CD230137 < 0)
        p.mauso_7_1_Tan_CD230137 = abs(p.mauso_7_1_Tan_CD230137);
    while (p.tuso_7_1_Tan_CD230137 != p.mauso_7_1_Tan_CD230137)
    {
        if (p.tuso_7_1_Tan_CD230137 > p.mauso_7_1_Tan_CD230137)
            p.tuso_7_1_Tan_CD230137 -= p.mauso_7_1_Tan_CD230137;
        else
            p.mauso_7_1_Tan_CD230137 -= p.tuso_7_1_Tan_CD230137;
    }
    return p.tuso_7_1_Tan_CD230137;
}
void ToiGian_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    char ucln_7_1_Tan_CD230137;
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
    {
        ucln_7_1_Tan_CD230137 = UCLN_7_1_Tan_CD230137(p[i_7_1_Tan_CD230137]);
        p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 /= ucln_7_1_Tan_CD230137;
        p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 /= ucln_7_1_Tan_CD230137;
    }
    Xuat_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
}
char countPSAm_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    char count_7_1_Tan_CD230137 = 0;
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
    {
        if (p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 < 0 || p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 < 0)
            count_7_1_Tan_CD230137++;
    }
    return count_7_1_Tan_CD230137;
}
char countPSDuong_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    char count_7_1_Tan_CD230137 = 0;
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
    {
        if (p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 > 0 && p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 > 0)
            count_7_1_Tan_CD230137++;
    }
    return count_7_1_Tan_CD230137;
}
void firstPSDuong_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
    {
        if (p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 > 0 && p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 > 0)
        {
            printf("\n\nPhân số dương đầu tiên trong mảng là %d/%d ở vị trí thứ %d", p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137, p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137, i_7_1_Tan_CD230137 + 1);
            break;
        }
    }
}
void PSmax_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    float maxPS_7_1_Tan_CD230137 = 0;
    char index_7_1_Tan_CD230137;
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
    {
        if (maxPS_7_1_Tan_CD230137 < (float)p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 / p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137)
        {
            maxPS_7_1_Tan_CD230137 = (float)p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 / p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137;
            index_7_1_Tan_CD230137 = i_7_1_Tan_CD230137;
        }
    }
    printf("\n\nPhân số lớn nhất trong mảng là %d/%d ở vị trí thứ %d", p[index_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137, p[index_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137, index_7_1_Tan_CD230137 + 1);
}
void PSmin_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    float minPS_7_1_Tan_CD230137 = 0;
    char index_7_1_Tan_CD230137;
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
    {
        if (minPS_7_1_Tan_CD230137 > (float)p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 / p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137)
        {
            minPS_7_1_Tan_CD230137 = (float)p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 / p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137;
            index_7_1_Tan_CD230137 = i_7_1_Tan_CD230137;
        }
    }
    printf("\n\nPhân số nhỏ nhất trong mảng là %d/%d ở vị trí thứ %d", p[index_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137, p[index_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137, index_7_1_Tan_CD230137 + 1);
}
void SapXepAsc_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    PhanSo_7_1_Tan_CD230137 temp_7_1_Tan_CD230137;
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137 - 1; i_7_1_Tan_CD230137++)
    {
        for (char j_7_1_Tan_CD230137 = i_7_1_Tan_CD230137 + 1; j_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; j_7_1_Tan_CD230137++)
        {
            if ((float)p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 / p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 > (float)p[j_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 / p[j_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137)
            {
                temp_7_1_Tan_CD230137 = p[i_7_1_Tan_CD230137];
                p[i_7_1_Tan_CD230137] = p[j_7_1_Tan_CD230137];
                p[j_7_1_Tan_CD230137] = temp_7_1_Tan_CD230137;
            }
        }
    }
    Xuat_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
}
void SapXepDesc_7_1_Tan_CD230137(PhanSo_7_1_Tan_CD230137 p[], char n_7_1_Tan_CD230137)
{
    PhanSo_7_1_Tan_CD230137 temp_7_1_Tan_CD230137;
    for (char i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 < n_7_1_Tan_CD230137 - 1; i_7_1_Tan_CD230137++)
    {
        for (char j_7_1_Tan_CD230137 = i_7_1_Tan_CD230137 + 1; j_7_1_Tan_CD230137 < n_7_1_Tan_CD230137; j_7_1_Tan_CD230137++)
        {
            if ((float)p[i_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 / p[i_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137 < (float)p[j_7_1_Tan_CD230137].tuso_7_1_Tan_CD230137 / p[j_7_1_Tan_CD230137].mauso_7_1_Tan_CD230137)
            {
                temp_7_1_Tan_CD230137 = p[i_7_1_Tan_CD230137];
                p[i_7_1_Tan_CD230137] = p[j_7_1_Tan_CD230137];
                p[j_7_1_Tan_CD230137] = temp_7_1_Tan_CD230137;
            }
        }
    }
    Xuat_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
}

int main()
{
    int n;
    do
    {
        system("cls");
        printf("Tran Nhat Tan - CD230137\nNguyen Bao Minh - CD230600\nPham Bao Loc - CD230056\nNguyen Sy Manh - CD230067\nDang Nguyen Bao Linh - CD233494\n");
        printf("\nBuoi 1: Viet chuong trinh don gian");
        printf("\nBuoi 2: Cau truc re nhanh if else, switch case");
        printf("\nBuoi 3: Vong lap for, while, do while");
        printf("\nBuoi 4: Viet ham con, ham de quy");
        printf("\nBuoi 5: Cac thao tac voi mang 1 chieu");
        printf("\nBuoi 6: Mang 2 chieu (ma tran)");
        printf("\nBuoi 7: Xau ky tu (string), kieu du lieu tu dinh nghia (struct)");
        printf("\n\nLua chon bai tap buoi thu: ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
        {
            int m;
            printf("\nBan da lua chon bai tap buoi thu %d", n);
            printf("\n\nDE BAI 1: Cho biet chu so hang tram, chuc, don vi cua X (100<=X<=999)\n");
            printf("DE BAI 2: Tim so lon nhat trong 3 so a, b, c cho truoc");
            printf("\n\nLua chon bai tap so: ");
            scanf("%d", &m);
            switch (m)
            {
            case 1: // Pham Bao Loc - CD230056
            {
            bai_1_1:
                int X_1_1_Loc_CD230056;
                do
                {
                    system("cls");
                    printf("Pham Bao Loc - CD230056\n\n");
                    printf("DE BAI:\nCho biet chu so hang tram, chuc, don vi cua X (100<=X<=999)\n");
                    printf("\n");
                    printf("nhap vao so nguyen co ba chu so X = ");
                    scanf("%d", &X_1_1_Loc_CD230056);
                } while (X_1_1_Loc_CD230056 < 100 || X_1_1_Loc_CD230056 > 999);

                int tram_1_1_Loc_CD230056, chuc_1_1_Loc_CD230056, donvi_1_1_Loc_CD230056;
                tram_1_1_Loc_CD230056 = X_1_1_Loc_CD230056 / 100;
                chuc_1_1_Loc_CD230056 = X_1_1_Loc_CD230056 / 10 % 10;
                donvi_1_1_Loc_CD230056 = X_1_1_Loc_CD230056 % 10;
                printf("\nCHU SO HANG TRAM LA: %d\n", tram_1_1_Loc_CD230056);
                printf("CHU SO HANG CHUC LA: %d\n", chuc_1_1_Loc_CD230056);
                printf("CHU SO HANG DON VI LA: %d\n", donvi_1_1_Loc_CD230056);
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_1_1;
                }
                else if (k == 2)
                {
                    break;
                }

                system("pause");
                break;
            }
            case 2:
            {
            bai_1_2: // Pham Bao Loc - CD230056
                int a_1_2_Loc_CD230056, b_1_2_Loc_CD230056, c_1_2_Loc_CD230056, Max_1_2_Loc_CD230056;
                do
                {
                    system("cls");
                    printf("Pham Bao Loc - CD230056\n\n");
                    printf("DE BAI:\nTim so lon nhat trong 3 so a, b, c cho truoc\n\n");
                    printf("Nhap vao so nguyen a = ");
                    scanf("%d", &a_1_2_Loc_CD230056);
                    printf("Nhap vao so nguyen b = ");
                    scanf("%d", &b_1_2_Loc_CD230056);
                    printf("Nhap vao so nguyen c = ");
                    scanf("%d", &c_1_2_Loc_CD230056);
                } while (0);
                Max_1_2_Loc_CD230056 = a_1_2_Loc_CD230056;
                if (b_1_2_Loc_CD230056 > Max_1_2_Loc_CD230056)
                {
                    Max_1_2_Loc_CD230056 = b_1_2_Loc_CD230056;
                }
                if (c_1_2_Loc_CD230056 > Max_1_2_Loc_CD230056)
                {
                    Max_1_2_Loc_CD230056 = c_1_2_Loc_CD230056;
                }
                printf("\nSO LON NHAT TRONG BA SO a, b, c LA: MAX = %d\n", Max_1_2_Loc_CD230056);
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_1_2;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            }
            break;
        }

        case 2:
        {
            int m;
            printf("\nBan da lua chon bai tap buoi thu %d", n);
            printf("\n\nDE BAI 1: Giai phuong trinh bac nhat\n");
            printf("DE BAI 2: Giai phuong trinh bac hai");
            printf("\n\nLua chon bai tap so: ");
            scanf("%d", &m);
            switch (m)
            {
            case 1:
            {
            bai_2_1: // Pham Bao Loc - CD230056
                system("cls");
                printf("Pham Bao Loc - CD230056\n\n");
                printf("DE BAI:\nGiai phuong trinh bac nhat\n\n");
                float a_2_1_Loc_CD230056, b_2_1_Loc_CD230056, x_2_1_Loc_CD230056;
                printf("Nhap vao he so a: ");
                scanf("%f", &a_2_1_Loc_CD230056);
                printf("Nhap vao he so b: ");
                scanf("%f", &b_2_1_Loc_CD230056);
                if (a_2_1_Loc_CD230056 == 0 && b_2_1_Loc_CD230056 == 0)
                    printf("\nPHUONG TRINH CO VO SO NGHIEM");
                else if (a_2_1_Loc_CD230056 == 0 && b_2_1_Loc_CD230056 != 0)
                {
                    printf("\nPHUONG TRINH VO NGHIEM");
                }
                else
                {
                    x_2_1_Loc_CD230056 = -b_2_1_Loc_CD230056 / a_2_1_Loc_CD230056;
                    if (b_2_1_Loc_CD230056 == 0)
                        printf("\nPHUONG TRINH CO NGHIEM DUY NHAT x = 0");
                    else
                        printf("\nPHUONG TRINH CO NGHIEM DUY NHAT x = %.2f", x_2_1_Loc_CD230056);
                }
                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_2_1;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            case 2:
            {
            bai_2_2: // Dang Nguyen Bao Linh - CD233494
                system("cls");
                printf("Dang Nguyen Bao Linh - CD233494\n\n");
                printf("DE BAI:\nGiai phuong trinh bac hai\n\n");
                float a_2_2_Linh_CD233494, b_2_2_Linh_CD233494, c_2_2_Linh_CD233494, delta_2_2_Linh_CD233494, x1_2_2_Linh_CD233494, x2_2_2_Linh_CD233494;
                printf("nhap vao he so a: ");
                scanf("%f", &a_2_2_Linh_CD233494);
                printf("nhap vao he so b: ");
                scanf("%f", &b_2_2_Linh_CD233494);
                printf("nhap vao he so c: ");
                scanf("%f", &c_2_2_Linh_CD233494);
                delta_2_2_Linh_CD233494 = pow(b_2_2_Linh_CD233494, 2) - 4 * a_2_2_Linh_CD233494 * c_2_2_Linh_CD233494;
                // ax^2 + bx + c = 0 (1)
                if (a_2_2_Linh_CD233494 != 0) // điều kiện để có ptb2 là a khác 0
                {
                    if (delta_2_2_Linh_CD233494 < 0) // Δ < 0 => phương trình (1) vô nghiệm
                    {
                        float phanThuc = -b_2_2_Linh_CD233494 / (2 * a_2_2_Linh_CD233494);
                        float phanAo = sqrt(-delta_2_2_Linh_CD233494) / (2 * a_2_2_Linh_CD233494);
                        printf("\nPHUONG TRINH CO HAI NGHIEM PHUC\nx1 = %.2lf + %.2lfi\nx2 = %.2lf - %.2lfi\n", phanThuc, phanAo, phanThuc, phanAo);
                    }
                    else if (delta_2_2_Linh_CD233494 > 0) // Δ > 0 => phương trình (1) có 2 nghiệm phân biệt
                    {

                        if (a_2_2_Linh_CD233494 + b_2_2_Linh_CD233494 + c_2_2_Linh_CD233494 == 0) // nhẩm nghiệm
                        {
                            x2_2_2_Linh_CD233494 = c_2_2_Linh_CD233494 / a_2_2_Linh_CD233494;
                            printf("\nPHUONG TRINH CO NGHIEM x1 = 1\n");
                            printf("\nPHUONG TRINH CO NGHIEM x2 = %.2f", x2_2_2_Linh_CD233494);
                        }
                        else if (a_2_2_Linh_CD233494 - b_2_2_Linh_CD233494 + c_2_2_Linh_CD233494 == 0) // nhẩm nghiệm
                        {
                            x2_2_2_Linh_CD233494 = -c_2_2_Linh_CD233494 / a_2_2_Linh_CD233494;
                            printf("\nPHUONG TRINH CO NGHIEM x1 = -1\n");
                            printf("\nPHUONG TRINH CO NGHIEM x2 = %.2f", x2_2_2_Linh_CD233494);
                        }
                        else // Δ > 0 => phương trình (1) có 2 nghiệm phân biệt
                        {
                            x1_2_2_Linh_CD233494 = (-b_2_2_Linh_CD233494 + sqrt(delta_2_2_Linh_CD233494)) / (2 * a_2_2_Linh_CD233494);
                            x2_2_2_Linh_CD233494 = (-b_2_2_Linh_CD233494 - sqrt(delta_2_2_Linh_CD233494)) / (2 * a_2_2_Linh_CD233494);
                            printf("\nPHUONG TRINH CO NGHIEM x1 = %.2f\n", x1_2_2_Linh_CD233494);
                            printf("\nPHUONG TRINH CO NGHIEM x2 = %.2f\n", x2_2_2_Linh_CD233494);
                        }
                    }
                    else // Δ = 0 => phương trình (1) có nghiệm kép
                    {
                        x1_2_2_Linh_CD233494 = -b_2_2_Linh_CD233494 / 2 * a_2_2_Linh_CD233494;
                        printf("\nPHUONG TRINH CO NGHIEM KEP x1 = x2 = %.2f", x1_2_2_Linh_CD233494);
                    }
                }
                else
                    printf("\na = 0 PHUONG TRINH TRO THANH PHUONG TRINH BAC NHAT");

                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_2_2;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            }
            break;
        }

        case 3:
        {
            int m;
            printf("\nBan da lua chon bai tap buoi thu %d", n);
            printf("\n\nDE BAI 1: Nhap 3 so nguyen a, b va n voi a, b < n\n          Tinh tong cac so nguyen duong nho hon n chia het cho a nhung khong chia het cho b\n");
            printf("DE BAI 2: Tim cac so tu 10 den 99 sao cho tich cua 2 chu so bang 2 lan tong cua 2 chu so");
            printf("\n\nLua chon bai tap so: ");
            scanf("%d", &m);
            switch (m)
            {
            case 1:
            {
            bai_3_1: // Dang Nguyen Bao Linh - CD233494
                int a_3_1_Linh_CD233494, b_3_1_Linh_CD233494, n_3_1_Linh_CD233494, tong_3_1_Linh_CD233494 = 0;
                do
                {
                    system("cls");
                    printf("Dang Nguyen Bao Linh - CD233494\n\n");
                    printf("DE BAI:\nNhap 3 so nguyen a, b va n voi a, b < n\nTinh tong cac so nguyen duong nho hon n chia het cho a nhung khong chia het cho b\n");
                    printf("\n");
                    printf("nhap vao so nguyen a = ");
                    scanf("%d", &a_3_1_Linh_CD233494);
                    printf("nhap vao so nguyen b = ");
                    scanf("%d", &b_3_1_Linh_CD233494);
                    printf("nhap vao so nguyen n = ");
                    scanf("%d", &n_3_1_Linh_CD233494);
                } while (a_3_1_Linh_CD233494 > n_3_1_Linh_CD233494 || b_3_1_Linh_CD233494 > n_3_1_Linh_CD233494);
                int dem_3_1_Linh_CD233494 = 0;
                for (int i = 1; i < n_3_1_Linh_CD233494; i++)
                {
                    if (i % a_3_1_Linh_CD233494 == 0 && i % b_3_1_Linh_CD233494 != 0)
                    {
                        dem_3_1_Linh_CD233494++;
                        tong_3_1_Linh_CD233494 += i;
                        printf("\nSo thu %d: %d", dem_3_1_Linh_CD233494, i);
                    }
                }
                printf("\n\nTONG CAC SO NGUYEN DUONG NHO HON N CHIA HET CHO A NHUNG KHONG CHIA HET CHO B LA: %d", tong_3_1_Linh_CD233494);

                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_3_1;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            case 2:
            {
            bai_3_2: // Nguyen Sy Manh - CD230067
                system("cls");
                printf("Nguyen Sy Manh - CD230067\n");
                printf("\nDE BAI: Tim cac so tu 10 den 99 sao cho tich cua 2 chu so bang 2 lan tong cua 2 chu so\n\n");
                int tich_3_2_Manh_CD230067, tong_3_2_Manh_CD230067, dv_3_2_Manh_CD230067, chuc_3_2_Manh_CD230067;
                printf("CAC SO NGUYEN TRONG PHAM VI TU 10 DEN 99 SAO CHO TICH CUA 2 CHU SO BANG 2 LAN TONG CUA 2 CHU SO DO LA:");
                for (int i = 10; i <= 99; i++)
                {
                    dv_3_2_Manh_CD230067 = i % 10;          // lấy ra chữ số hàng đơn vị
                    chuc_3_2_Manh_CD230067 = (i / 10) % 10; // lấy ra chữ số hàng chục
                    tich_3_2_Manh_CD230067 = dv_3_2_Manh_CD230067 * chuc_3_2_Manh_CD230067;
                    tong_3_2_Manh_CD230067 = 2 * (dv_3_2_Manh_CD230067 + chuc_3_2_Manh_CD230067);
                    if (tong_3_2_Manh_CD230067 == tich_3_2_Manh_CD230067)
                        printf(" %d", i); // in ra số thỏa mãn
                }
                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_3_2;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            }
            break;
        }

        case 4:
        {
            int m;
            printf("\nBan da lua chon bai tap buoi thu %d\n", n);
            printf("\nDE BAI 1: Viet ham kiem tra so nguyen to\n");
            printf("DE BAI 2: Viet ham kiem tra so chinh phuong");
            printf("\n\nLua chon bai tap so: ");
            scanf("%d", &m);
            switch (m)
            {
            case 1:
            {
            bai_4_1: // Nguyen Sy Manh - CD230067
                system("cls");
                printf("Nguyen Sy Manh - CD230067\n\n");
                printf("DE BAI: Viet ham kiem tra so nguyen to\n");
                int x_4_1_Manh_CD230067;
                printf("\nNhap vao so nguyen x = ");
                scanf("%d", &x_4_1_Manh_CD230067);
                if (nguyento(x_4_1_Manh_CD230067))
                {
                    printf("\nSO NAY LA SO NGUYEN TO");
                }
                else
                {
                    printf("\nSO NAY KHONG PHAI LA SO NGUYEN TO");
                }
                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_4_1;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            case 2:
            {
            bai_4_2: // Nguyen Sy Manh - CD230067
                system("cls");
                printf("Nguyen Sy Manh - CD230067\n\n");
                printf("DE BAI: Viet ham kiem tra so chinh phuong\n");
                int x_4_2_Manh_CD230067;
                printf("\nNhap vao so nguyen x = ");
                scanf("%d", &x_4_2_Manh_CD230067);
                if (chinhphuong(x_4_2_Manh_CD230067))
                {
                    printf("\nSO NAY LA SO CHINH PHUONG");
                }
                else
                {
                    printf("\nSO NAY KHONG PHAI LA SO CHINH PHUONG");
                }
                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_4_2;
                }
                else if (k == 2)
                {
                    break;
                }
                printf("\n");
                system("pause");
                break;
            }
            }
            break;
        }

        case 5:
        {
            int m;
            printf("\nBan da lua chon bai tap buoi thu %d", n);
            printf("\n\nDE BAI 1: Nhap mang gom n so nguyen tu ban phim\n          Xuat mang vua nhap ra ban phim");
            printf("\nDE BAI 2: Nhap vao mang gom n so nguyen, va 2 so m va k\n");
            printf("       a. Mang co bao nhieu so chia het cho m nhung khong chia het cho k?\n");
            printf("       b. Tong cac so nguyen to, chinh phuong co trong mang?");
            printf("\n\nLua chon bai tap so: ");
            scanf("%d", &m);
            switch (m)
            {
            case 1:
            {
            bai_5_1: // Nguyen Bao Minh - CD230600
                int n_5_1_Minh_CD230600, a_5_1_Minh_CD230600[100];
                system("cls");
                printf("Nguyen Bao Minh - CD230600\n\n");
                printf("DE BAI:\nNhap mang gom n so nguyen tu ban phim\nXuat mang vua nhap ra ban phim\n");
                printf("\nNhap vao so luong phan tu cua mang n = ");
                scanf("%d", &n_5_1_Minh_CD230600);
                printf("\nNHAP VAO MANG a\n");
                for (int i = 0; i < n_5_1_Minh_CD230600; i++)
                {
                    printf("a[%d] = ", i);
                    scanf("%d", &a_5_1_Minh_CD230600[i]);
                }
                printf("\nXUAT RA MANG a");
                for (int i = 0; i < n_5_1_Minh_CD230600; i++)
                {
                    printf("\na[%d] = %d", i, a_5_1_Minh_CD230600[i]);
                }
                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_5_1;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            case 2:
            {
            bai_5_2: // Nguyen Bao Minh - CD230600
                int n_5_2_Minh_CD230600, a_5_2_Minh_CD230600[100], m_5_2_Minh_CD230600, k_5_2_Minh_CD230600, count_5_2_Minh_CD230600 = 0;
                do // vòng lặp này ép người nhập phải nhập đúng n nguyên dương thì chương trình mới tiếp tục
                {
                    system("cls"); // xóa màn hình 'nhap vao so nguyen duong n =' của vòng lặp khi nhập sai
                    printf("Nguyen Bao Minh - CD230600\n\n");
                    printf("DE BAI: Nhap vao mang gom n so nguyen, va 2 so m va k\n");
                    printf("     a. Mang co bao nhieu so chia het cho m nhung khong chia het cho k?\n");
                    printf("     b. Tong cac so nguyen to, chinh phuong co trong mang?\n\n");
                    printf("Nhap vao so nguyen duong n = ");
                    scanf("%d", &n_5_2_Minh_CD230600);
                    printf("Nhap vao so nguyen duong m = ");
                    scanf("%d", &m_5_2_Minh_CD230600);
                    printf("Nhap vao so nguyen duong k = ");
                    scanf("%d", &k_5_2_Minh_CD230600);
                } while (n_5_2_Minh_CD230600 <= 0); // nếu nhập sai điều kiện n>0 của đề bài thì thực hiện vòng lặp
                printf("\nNhap vao cac phan tu cua mang\n");
                for (int i = 0; i < n_5_2_Minh_CD230600; i++)
                {
                    printf("a[%d] = ", i);
                    scanf("%d", &a_5_2_Minh_CD230600[i]);
                }
                int dem1_5_2_Minh_CD230600 = 0;
                for (int i = 0; i < n_5_2_Minh_CD230600; i++)
                {
                    if (a_5_2_Minh_CD230600[i] % m_5_2_Minh_CD230600 == 0 && a_5_2_Minh_CD230600[i] % k_5_2_Minh_CD230600 != 0)
                    {
                        dem1_5_2_Minh_CD230600++;
                        printf("\nSo thu %d: %d", dem1_5_2_Minh_CD230600, a_5_2_Minh_CD230600[i]);
                        count_5_2_Minh_CD230600++;
                    }
                }
                printf("\n\nMANG CO %d SO CHIA HET CHO M NHUNG KHONG CHIA HET CHO K\n", count_5_2_Minh_CD230600);
                int dem2_5_2_Minh_CD230600 = 0;
                for (int i = 0; i < n_5_2_Minh_CD230600; i++)
                {
                    if (nguyento(a_5_2_Minh_CD230600[i]))
                    {
                        dem2_5_2_Minh_CD230600++;
                        printf("\nSo thu %d: %d", dem2_5_2_Minh_CD230600, a_5_2_Minh_CD230600[i]);
                    }
                }
                printf("\n\nTONG CAC SO NGUYEN TO TRONG MANG LA: %d\n", tongsonguyento(a_5_2_Minh_CD230600, n_5_2_Minh_CD230600));
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_5_2;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            }
            break;
        }

        case 6:
        {
            int m;
            printf("\nBan da lua chon bai tap buoi thu %d", n);
            printf("\n\nDE BAI 1: Nhap vao ma tran a gom m dong, k cot, ma tran b gom k dong va n cot tu ban phim\n");
            printf("       a. In 2 ma tran ra man hinh\n");
            printf("       b. Tinh c=a*b, voi c_ij = M_(k=0)^(n-1) a_ik * b_kj\n");
            printf("       c. In ma tran ket qua ra man hinh");
            printf("\nDE BAI 2: Nhap vao ma tran a (m dong, n cot), dua ra cac phan tu yen ngua trong a");
            printf("\n\nLua chon bai tap so: ");
            scanf("%d", &m);
            switch (m)
            {
            case 1:
            {
            bai_6_1: // Nguyen Bao Minh - CD230600
                int m_6_1_Minh_CD230600, k_6_1_Minh_CD230600, n_6_1_Minh_CD230600, a_6_1_Minh_CD230600[100][100], b_6_1_Minh_CD230600[100][100];
                do // vòng lặp này ép người nhập phải nhập đúng m_6_1_Minh_CD230600 nguyên dương thì chương trình mới tiếp tục
                {
                    system("cls"); // xóa màn hình 'nhap vao so nguyen duong m =' của vòng lặp khi nhập sai
                    printf("Nguyen Bao Minh - CD230600\n");
                    printf("\nDE BAI 1: Nhap vao ma tran a gom m dong, k cot, ma tran b gom k dong va n cot tu ban phim\n");
                    printf("       a. In 2 ma tran ra man hinh\n");
                    printf("       b. Tinh c=a*b, voi c_ij = M_(k=0)^(n-1) a_ik * b_kj\n");
                    printf("       c. In ma tran ket qua ra man hinh\n");
                    printf("\nNhap vao so nguyen duong m = ");
                    scanf("%d", &m_6_1_Minh_CD230600);
                    printf("Nhap vao so nguyen duong k = ");
                    scanf("%d", &k_6_1_Minh_CD230600);
                    printf("Nhap vao so nguyen duong n = ");
                    scanf("%d", &n_6_1_Minh_CD230600);
                } while (m_6_1_Minh_CD230600 <= 0 || k_6_1_Minh_CD230600 <= 0 || n_6_1_Minh_CD230600 <= 0); // nếu nhập sai điều kiện m_6_1_Minh_CD230600 >0 của đề bài thì thực hiện vòng lặp

                printf("\nNHAP VAO MA TRAN a GOM m DONG, k COT\n");
                nhapmanga2chieu_6_1_Minh_CD230600(a_6_1_Minh_CD230600, m_6_1_Minh_CD230600, k_6_1_Minh_CD230600);
                printf("\nIN RA MA TRAN a GOM m DONG, k COT\n");
                xuatmanga2chieu_6_1_Minh_CD230600(a_6_1_Minh_CD230600, m_6_1_Minh_CD230600, k_6_1_Minh_CD230600);

                printf("\n\nNHAP VAO MA TRAN b GOM k DONG, n COT\n");
                nhapmangb2chieu_6_1_Minh_CD230600(b_6_1_Minh_CD230600, k_6_1_Minh_CD230600, n_6_1_Minh_CD230600);
                printf("\nIN RA MA TRAN b GOM k DONG, n COT\n");
                xuatmangb2chieu_6_1_Minh_CD230600(b_6_1_Minh_CD230600, k_6_1_Minh_CD230600, n_6_1_Minh_CD230600);

                int c_6_1_Minh_CD230600[100][100];
                matrantich_6_1_Minh_CD230600(c_6_1_Minh_CD230600, a_6_1_Minh_CD230600, b_6_1_Minh_CD230600, m_6_1_Minh_CD230600, k_6_1_Minh_CD230600, n_6_1_Minh_CD230600);
                printf("\n\nIN RA MA TRAN c = a * b\n");
                xuatmangc2chieu_6_1_Minh_CD230600(c_6_1_Minh_CD230600, m_6_1_Minh_CD230600, n_6_1_Minh_CD230600);
                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_6_1;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                printf("\n");
                system("pause");
                break;
            }
            case 2:
            {
            bai_6_2: // Tran Nhat Tan - CD230137
                system("cls");
                printf("Tran Nhat Tan - CD230137\n\n");
                printf("DE BAI 2: Nhap vao ma tran a (m dong, n cot), dua ra cac phan tu yen ngua trong a\n\n");
                SetConsoleOutputCP(65001);
                int a_6_2_Tan_CD230137[maxD][maxC];
                char m_6_2_Tan_CD230137, n_6_2_Tan_CD230137;
                printf("Nhap ma tran a\n");
                printf("   Nhap so dong: ");
                m_6_2_Tan_CD230137 = nhap_mn_6_2_Tan_CD230137(m_6_2_Tan_CD230137);
                printf("   Nhap so cot: ");
                n_6_2_Tan_CD230137 = nhap_mn_6_2_Tan_CD230137(n_6_2_Tan_CD230137);
                MatrixIO_6_2_Tan_CD230137(a_6_2_Tan_CD230137, m_6_2_Tan_CD230137, n_6_2_Tan_CD230137);
                printf("\nCac phan tu yen ngua trong mang a la:");
                MinRowMaxCol_6_2_Tan_CD230137(a_6_2_Tan_CD230137, m_6_2_Tan_CD230137, n_6_2_Tan_CD230137);
                MaxRowMinCol_6_2_Tan_CD230137(a_6_2_Tan_CD230137, m_6_2_Tan_CD230137, n_6_2_Tan_CD230137);
                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_6_2;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            }
            break;
        }

        case 7:
        {
            int m;
            printf("\nBan da lua chon bai tap buoi thu %d", n);
            printf("\n\nDE BAI 1: Tim tu co do dai lon nhat trong xau s");
            printf("\nDE BAI 2: Nhap xuat n phan so. Rut gon moi phan so\n");
            printf("          Dem so phan so am, duong trong mang\n");
            printf("          Tim phan so duong dau tien trong mang\n");
            printf("          Tim phan so nho nhat, lon nhat trong mang\n");
            printf("          Sap xep mang tang dan/giam dan");
            printf("\n\nLua chon bai tap so: ");
            scanf("%d", &m);
            switch (m)
            {
            case 1:
            {
            bai_7_1: // Tran Nhat Tan - CD230137
                system("cls");
                getchar();
                SetConsoleOutputCP(65001);
                printf("Trần Nhật Tân - CD230137\n\n");
                printf("DE BAI: Tim tu co do dai lon nhat trong xau s\n\n");
                char s_7_1_Tan_CD230137[50], count_7_1_Tan_CD230137 = -1, begin_7_1_Tan_CD230137 = 0, start_7_1_Tan_CD230137 = 0, end_7_1_Tan_CD230137, i_7_1_Tan_CD230137, j_7_1_Tan_CD230137, max_7_1_Tan_CD230137 = 0;
                printf("Nhập xâu kí tự: ");
                fgets(s_7_1_Tan_CD230137, sizeof s_7_1_Tan_CD230137, stdin);
                char len_7_1_Tan_CD230137 = strlen(s_7_1_Tan_CD230137) - 1;
                for (i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 <= len_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
                {
                    count_7_1_Tan_CD230137++;
                    if (s_7_1_Tan_CD230137[i_7_1_Tan_CD230137] == ' ' || i_7_1_Tan_CD230137 == len_7_1_Tan_CD230137)
                    {
                        if (max_7_1_Tan_CD230137 < count_7_1_Tan_CD230137)
                            max_7_1_Tan_CD230137 = count_7_1_Tan_CD230137;
                        count_7_1_Tan_CD230137 = -1;
                    }
                }
                printf("Từ có độ dài lớn nhất trong xâu có %d kí tự\n", max_7_1_Tan_CD230137);
                printf("Từ có độ dài lớn nhất trong xâu là: ");
                for (i_7_1_Tan_CD230137 = 0; i_7_1_Tan_CD230137 <= len_7_1_Tan_CD230137; i_7_1_Tan_CD230137++)
                {
                    if (s_7_1_Tan_CD230137[i_7_1_Tan_CD230137] == ' ' || i_7_1_Tan_CD230137 == len_7_1_Tan_CD230137)
                    {
                        end_7_1_Tan_CD230137 = i_7_1_Tan_CD230137 - begin_7_1_Tan_CD230137;
                        if (end_7_1_Tan_CD230137 == max_7_1_Tan_CD230137)
                        {
                            printf("\"");
                            for (j_7_1_Tan_CD230137 = start_7_1_Tan_CD230137; j_7_1_Tan_CD230137 <= i_7_1_Tan_CD230137 - 1; j_7_1_Tan_CD230137++)
                                printf("%c", s_7_1_Tan_CD230137[j_7_1_Tan_CD230137]);
                            printf("\" ");
                        }
                        begin_7_1_Tan_CD230137 = i_7_1_Tan_CD230137 + 1;
                        start_7_1_Tan_CD230137 = i_7_1_Tan_CD230137 + 1;
                    }
                }
                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_7_1;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            case 2:
            {
            bai_7_2: // Tran Nhat Tan - CD230137
                system("cls");
                SetConsoleOutputCP(65001);
                printf("Trần Nhật Tân - CD230137\n\n");
                printf("DE BAI 2: Nhap xuat n phan so. Rut gon moi phan so\n");
                printf("          Dem so phan so am, duong trong mang\n");
                printf("          Tim phan so duong dau tien trong mang\n");
                printf("          Tim phan so nho nhat, lon nhat trong mang\n");
                printf("          Sap xep mang tang dan/giam dan\n");
                PhanSo_7_1_Tan_CD230137 p[max1];
                char n_7_1_Tan_CD230137;
                printf("\nNhập số phân số trong mảng: ");
                n_7_1_Tan_CD230137 = nhap_n_7_1_Tan_CD230137(n_7_1_Tan_CD230137);
                printf("\n");
                Nhap_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
                printf("\nIn các phân số trong mảng ra màn hình:\n\t");
                Xuat_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
                printf("\n\nTối giản các phân số trong mảng:\n\t");
                ToiGian_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
                printf("\n\nSố lượng phân số âm trong mảng là %d", countPSAm_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137));
                printf("\n\nSố lượng phân số dương có trong mảng là %d", countPSDuong_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137));
                firstPSDuong_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
                PSmax_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
                PSmin_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
                printf("\n\nSắp xếp phân số tăng dần:\n\t");
                SapXepAsc_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
                printf("\n\nSắp xếp các phân số giảm dần:\n\t");
                SapXepDesc_7_1_Tan_CD230137(p, n_7_1_Tan_CD230137);
                printf("\n");
                printf("\n");
                printf("Nhan 1 de thuc hien lai chuong trinh nay\nNhan 2 de thuc hien chuong trinh khac\n");
                int k;
                scanf("%d", &k);
                if (k == 1)
                {
                    goto bai_7_2;
                }
                else if (k == 2)
                {
                    break;
                }
                system("pause");
                break;
            }
            }
            break;
        }

        default:
        {
            printf("\nSo nhap vao khong hop le\nVui long nhap so buoi tu 1-7\n");
            printf("\n");
            system("pause");
            break;
        }
        }
    } while (1);

    return 0;
}