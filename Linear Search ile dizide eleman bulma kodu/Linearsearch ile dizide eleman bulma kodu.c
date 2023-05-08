
#include <stdio.h>

int LinearSearch(int dizi[], int d, int x) {
	int v;
    for (v = 0; v < d; v++) {
        if (dizi[v] == x) {
            return v;
        }
    }
    return -1;
}

int main() {
	
    int d,v,AranacakEleman;
    printf("Lutfen dizinin boyutunu giriniz: ");
    scanf("%d", &d);
    
    int dizi[d];
    for (v = 0; v < d; v++) {
        printf("Lutfen dizinin %d. elemanini giriniz: ", v+1);
        scanf("%d", &dizi[v]);
    }
    
    printf("Lutfen aranacak olan elemani giriniz: ");
    scanf("%d", &AranacakEleman);

    int ProgramSonucu = LinearSearch(dizi, d, AranacakEleman);
    if (ProgramSonucu != -1) {
        printf("Aratmis oldugunuz %d elemani dizinin %d. sirasinda bulumustur.\n", AranacakEleman, ProgramSonucu+1);
    } else {
        printf("Aratmis oldugunuz %d elemani dizide bulunamadi.Tekrar deneyin.\n", AranacakEleman);
    }

    return 0;
}



