#include <stdio.h>

int main()
{
    int n, choice;
    printf("Nhap vao mot so nguyen n: ");
    scanf("%d", &n);
    printf("INTEGER NUMBER\n");
    printf("1. In ra day so co gia tri nho hon hoac bang n va tinh tong.\n");
    printf("2. In ra va dem cac so chia het cho 3 nho hon n.\n");
    printf("3. Kiem tra so nguyen co phai so nguyen to khong.\n");
    printf("4. Kiem tra so nguyen co phai so hoan hao khong.\n");
    printf("5. Tinh tong cac uoc so cua n.\n");
    printf("6. Tinh giai thua n.\n");
    printf("7. In ra so dao nguoc cua n.\n");
    printf("8. In ra cac so nguyen to tu 1-n.\n");
    printf("9. Thoat.\n");
    printf("Lua chon cua ban: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Day so co gia tri nho hon hoac bang %d la: ", n);
            for (int i = 0; i <= n; i++)
            {
                printf("%d ", i);
            }
            printf("\nTong cua day so la: %d\n", (n * (n + 1)) / 2);
            break;
        case 2:
            printf("Cac so chia het cho 3 nho hon %d la: ", n);
            int count = 0;
            for (int i = 0; i < n; i++)
            {
                if (i % 3 == 0)
                {
                    printf("%d ", i);
                    count++;
                }
            }
            printf("\nSo luong cac so chia het cho 3 la: %d\n", count);
            break;
        case 3:
            if (isPrime(n))
            {
                printf("%d la so nguyen to.\n", n);
            }
            else
            {
                printf("%d khong phai la so nguyen to.\n", n);
            }
            break;
        case 4:
            if (isPerfect(n))
            {
                printf("%d la so hoan hao.\n", n);
            }
            else
            {
                printf("%d khong phai la so hoan hao.\n", n);
            }
            break;
        case 5:
            printf("Tong cac uoc so cua %d la: %d\n", n, sumOfDivisors(n));
            break;
        case 6:
            printf("Giai thua cua %d la: %d\n", n, factorial(n));
            break;
        case 7:
            printf("So dao nguoc cua %d la: %d\n", n, reverseNumber(n));
            break;
        case 8:
            printf("Cac so nguyen to tu 1 den %d la: ", n);
            printPrimes(n);
            break;
        case 9:
            printf("Tam biet!\n");
            break;
        default:
            printf("Lua chon khong hop le. Vui long chon lai.\n");
            break;
    }

    return 0;
}

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0
