#include <stdio.h>
#include <string.h>

// Writer struct
struct writer {
    char name[50];
    int birthDate;
};

// Book struct
struct book {
    char bookname[50];
    int page;
    float price;
    int stock;
    struct writer writer;
};

// Kitap bilgilerini yazdýran fonksiyon
void BookInfo(struct book *b) {

    printf("Book's name: %s\n", b->bookname);
    printf("Book's writer: %s\n", b->writer.name);
    printf("Book's birth year: %d\n", b->writer.birthDate);
    printf("Book's page: %d\n", b->page);
    printf("Book's price: %.2f\n", b->price);
    printf("Book's stock: %d\n\n", b->stock);
}

int main() {

    struct book library[2];
    int i;

    // 1. kitap
    strcpy(library[0].bookname, "A Little Prince");
    strcpy(library[0].writer.name, "Antoine de Saint Exupery");
    library[0].writer.birthDate = 1900;
    library[0].page = 200;
    library[0].price = 250.50;
    library[0].stock = 15;

    // 2. kitap
    strcpy(library[1].bookname, "Seker Portakali");
    strcpy(library[1].writer.name, "Jose Mauro de Vasconcelos");
    library[1].writer.birthDate = 1920;
    library[1].page = 245;
    library[1].price = 85.00;
    library[1].stock = 42;

    
    for(i = 0; i < 2; i++) {
        BookInfo(&library[i]);
    }

    return 0;
}
