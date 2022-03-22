#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node*next;
};

struct node *head;
awal(){
    struct node *ptr;
    int item;
    ptr= (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukan data: \n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\n Data berhasil disimpan di NODE awal!\n");
    }
}

void akhir(){
    struct node *ptr,*temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("\n OVERFLOW");
    }
    else
    {
        printf("Masukan data: ");
        scanf("%d",&item);
        ptr->data = item;
        if(head == NULL)
            {
                ptr->next = NULL;
                head = ptr;
                printf("Berhasil menyimpan dalam NODE!\n");
            }
            else
            {
                temp = head;
                while(temp -> next != NULL)
                {
                    temp - temp->next;
                }
                temp->next = ptr;
                ptr->next = NULL;
                printf("Data berhasil disimpan di NODE akhir!\n");
        }
    }
}
sembarang(){
    int i, loc, item;
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node ));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW!");
    }
    else
    {
      printf("Masukan data: ");
        scanf("%d",&item);
        ptr->data = item;

         printf("Mau simpan di lokasi mana? ");
        scanf("%d",&loc);
        temp = head;
        for(i=0;i<loc;i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("\n Tidak dapat tersimpan!");
                return;
            }
        }
        ptr ->next = temp ->next;
        temp->next = ptr;
        printf("\n NODE berhasil disimpan!");
    }

}
void lihat(){struct node *ptr;
    ptr=head;
    if(ptr == NULL)
    {
        printf("tidak ada data!!!");
    }
    else
    {
        printf("Cetak data...");
        while(ptr!=NULL)
        {
            printf("\n%d",ptr->data);
            ptr = ptr->next;
        }
    }
}
int main()
{
    int pilihan = 0;
    while(pilihan != 7)// 7 untuk explict
    {
        printf("\n ******* Menu Latihan Linked List *******\n");
        printf("\n=========================================\n");
        printf("\n1.Input data di NODE awal\n2.Input data di NODE akhir \n3.Input data di NODE sembarang \n4.Lihat data dalam Linked List \n5.KELUAR\n");
        printf("\nPilihan : ");
        scanf("%d",&pilihan);

        switch(pilihan)
        {
        case 1:
        awal();
        break;

        case 2:
        akhir();
        break;

        case 3:
        sembarang();
        break;

        case 4:
        lihat();
        break;

        case 5:
        exit(0);
        break;

        default:("Silakan masukkan pilihan....");
        }
    }
}
