#include <stdio.h>  
#include <string.h>

//Ödev1: Kullanıcıdan alınan bir metni tersine çeviren bir C programı yazın. (Örneğin, "Merhaba dünya!" ifadesini "!aynüd abahreM" şeklinde çevirin.) (Fonksiyon adı: ReverseText)    
void ReverseText()
{  
    char str[50]; 
    printf (" Ters cevirilecek metni giriniz: ");
    scanf("%s", str);
    int i, len, temp;  
    len = strlen(str);
    for (i = 0; i < len/2; i++)  
    {
        temp = str[i];  
        str[i] = str[len - i - 1];  
        str[len - i - 1] = temp;  
    }   
    printf (" Tersine cevirilmis metin: %s", str);
}  

//Ödev2: Kullanıcıdan alınan bir kelimenin polindrom olup olmadığını kontrol eden bir C programı yazın. (Polindrom, tersten okunduğunda da aynı olan kelimelerdir. Örneğin, "kayak" veya "madam" gibi.) (Fonksiyon adı: IsPolindrom)
void IsPolindrom()
{
    char str[50];
    printf (" Kontrol edilecek kelimeyi giriniz: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-1-i]){
            printf("Palindrom degil");
            return;
        }
    }
    printf("Kelime palindromdur ");
}

//Ödev3: Kullanıcıdan alınan integer bir dizinin elemanlarını küçükten büyüğe sıralayan bir C programı yazın. (Sıralama algoritmalarını kullanacağız.) (Fonksiyon adı: SortIntArr)
void SortIntArr(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
                min = j;

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    printf("\nDizinin kucukten buyuge siralanmis hali: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main()
{
    ReverseText();
    printf("\n\n");
    IsPolindrom();
    printf("\n\n");

    int arr[] = { 0, 23, 14, 12, 9 };
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    SortIntArr(arr, arrLen);

    return 0;
}