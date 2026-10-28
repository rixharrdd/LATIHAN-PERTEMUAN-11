#include <stdio.h>
#include <string.h>

typedef struct {
    char nama_menumakan[50];
    double harga;
    int stok;
    
}Menu_Makanan;    
 
 typedef struct {
    char nama_menuminum[50];
    double harga;
    int stok;
    
}Menu_Minuman;    
    
 typedef struct {
    char nama[50];
    int id_pegawai;
    double gaji;
    
}Pegawai;

int main() {

    Menu_Makanan ayam_goreng, nasi_goreng, tempe_goreng, tahu_goreng, ikan_goreng;
    strcpy(ayam_goreng.nama_menumakan, "Ayam Goreng");
    strcpy(nasi_goreng.nama_menumakan, "Nasi Goreng");
    strcpy(tempe_goreng.nama_menumakan, "Tempe Goreng");
    strcpy(tahu_goreng.nama_menumakan, "Tahu Goreng");
    strcpy(ikan_goreng.nama_menumakan, "Ikan Goreng");
    
    ayam_goreng.harga = 15000;
    ayam_goreng.stok = 15;
    
    nasi_goreng.harga = 10000;
    nasi_goreng.stok = 20;
    
    tempe_goreng.harga = 5000;
    tempe_goreng.stok = 25;
    
    tahu_goreng.harga = 5000;
    tahu_goreng.stok = 30;
    
    ikan_goreng.harga = 10000;
    ikan_goreng.stok = 10;
    
    int nomor_makan;
    
    Menu_Minuman es_tehmanis, es_tehtawar, air_mineral;
    strcpy(es_tehmanis.nama_menuminum, "Es Teh Manis");
    strcpy(es_tehtawar.nama_menuminum, "Es Teh Tawar");
    strcpy(air_mineral.nama_menuminum, "Air Mineral");
    
    es_tehmanis.harga = 5000;
    es_tehmanis.stok = 10;
    
    es_tehtawar.harga = 5000;
    es_tehtawar.stok = 15;
    
    air_mineral.harga = 5000;
    air_mineral.stok = 20;
    
    int nomor_minum;
    
    Pegawai Rizki, Adit;
    strcpy(Rizki.nama, "Rizki");
    strcpy(Adit.nama, "Adit");
    
    Rizki.id_pegawai = 321;
    Rizki.gaji = 2500000;
    
    Adit.id_pegawai = 654;
    Adit.gaji = 2600000;
    
    int nomor_pegawai;
    
    printf("=======MENU MAKAN=======\n\n");

    printf("Nama Menu: %s\n", ayam_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", ayam_goreng.harga);
    printf("Stok: %d\n\n", ayam_goreng.stok);

    printf("Nama Menu: %s\n", nasi_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", nasi_goreng.harga);
    printf("Stok: %d\n\n", nasi_goreng.stok);
    
    printf("Nama Menu: %s\n", tempe_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", tempe_goreng.harga);
    printf("Stok: %d\n\n", tempe_goreng.stok);
    
    printf("Nama Menu: %s\n", tahu_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", tahu_goreng.harga);
    printf("Stok: %d\n\n", tahu_goreng.stok);
    
    printf("Nama Menu: %s\n", ikan_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", ikan_goreng.harga);
    printf("Stok: %d\n\n\n", ikan_goreng.stok);
    
    printf("=======MENU MINUM=======\n\n");

    printf("Nama Menu: %s\n", es_tehmanis.nama_menuminum);
    printf("Harga: Rp%.0f\n", es_tehmanis.harga);
    printf("Stok: %d\n\n", es_tehmanis.stok);

    printf("Nama Menu: %s\n", es_tehtawar.nama_menuminum);
    printf("Harga: Rp%.0f\n", es_tehtawar.harga);
    printf("Stok: %d\n\n", es_tehtawar.stok);
    
    printf("Nama Menu: %s\n", air_mineral.nama_menuminum);
    printf("Harga: Rp%.0f\n", air_mineral.harga);
    printf("Stok: %d\n\n\n", air_mineral.stok);
    
    printf("=======PEGAWAI=======\n\n");

    printf("Nama Pegawai: %s\n", Rizki.nama);
    printf("Id Pegawai: %d\n", Rizki.id_pegawai);
    printf("Gaji: Rp%.0f\n\n\n", Rizki.gaji);
    
    printf("Nama Pegawai: %s\n", Adit.nama);
    printf("Id Pegawai: %d\n", Adit.id_pegawai);
    printf("Gaji: Rp%.0f\n\n\n", Adit.gaji);
    
    int kategori, pilihan_ubah;
    
    printf("=====================================\n");
    printf("PILIH KATEGORI DATA YANG MAU DIGANTI:\n");
    printf("1. Menu Makanan\n");
    printf("2. Menu Minuman\n");
    printf("3. Data Pegawai\n");
    printf("Masukkan pilihan (1-3): ");
    scanf("%d", &kategori);
    getchar();

    if (kategori == 1) {
        printf("\nPILIH MENU MAKANAN:\n");
        printf("1. %s\n2. %s\n3. %s\n4. %s\n5. %s\n", 
               ayam_goreng.nama_menumakan, nasi_goreng.nama_menumakan, 
               tempe_goreng.nama_menumakan, tahu_goreng.nama_menumakan, ikan_goreng.nama_menumakan);
        printf("Pilih nomor (1-5): ");
        scanf("%d", &nomor_makan);
        
        Menu_Makanan *target = NULL;
        if (nomor_makan == 1) target = &ayam_goreng;
        else if (nomor_makan == 2) target = &nasi_goreng;
        else if (nomor_makan == 3) target = &tempe_goreng;
        else if (nomor_makan == 4) target = &tahu_goreng;
        else if (nomor_makan == 5) target = &ikan_goreng;

        if (target != NULL) {
            printf("\nAPA YANG MAU DIGANTI?\n");
            printf("1. Nama Menu\n2. Harga\n3. Stok\n");
            printf("Pilih (1-3): ");
            scanf("%d", &pilihan_ubah);
            getchar();

            if (pilihan_ubah == 1) {
                printf("Masukkan nama menu baru: ");
                fgets(target->nama_menumakan, sizeof(target->nama_menumakan), stdin);
                target->nama_menumakan[strcspn(target->nama_menumakan, "\n")] = 0;
                printf("Berhasil! Nama baru: %s\n", target->nama_menumakan);
            } else if (pilihan_ubah == 2) {
                printf("Masukkan harga baru: ");
                scanf("%lf", &target->harga);
                printf("Berhasil! Harga baru: Rp%.0f\n", target->harga);
            } else if (pilihan_ubah == 3) {
                printf("Masukkan stok baru: ");
                scanf("%d", &target->stok);
                printf("Berhasil! Stok baru: %d\n", target->stok);
            } else {
                printf("Pilihan tidak valid!\n");
            }
        } else {
            printf("Nomor menu makanan tidak valid!\n");
        }


    } else if (kategori == 2) {
        printf("\nPILIH MENU MINUMAN:\n");
        printf("1. %s\n2. %s\n3. %s\n", es_tehmanis.nama_menuminum, es_tehtawar.nama_menuminum, air_mineral.nama_menuminum);
        printf("Pilih nomor (1-3): ");
        scanf("%d", &nomor_minum);

        Menu_Minuman *target = NULL;
        if (nomor_minum == 1) target = &es_tehmanis;
        else if (nomor_minum == 2) target = &es_tehtawar;
        else if (nomor_minum == 3) target = &air_mineral;

        if (target != NULL) {
            printf("\nAPA YANG MAU DIGANTI?\n");
            printf("1. Nama Menu\n2. Harga\n3. Stok\n");
            printf("Pilih (1-3): ");
            scanf("%d", &pilihan_ubah);
            getchar();

            if (pilihan_ubah == 1) {
                printf("Masukkan nama minuman baru: ");
                fgets(target->nama_menuminum, sizeof(target->nama_menuminum), stdin);
                target->nama_menuminum[strcspn(target->nama_menuminum, "\n")] = 0;
                printf("Berhasil! Nama baru: %s\n", target->nama_menuminum);
            } else if (pilihan_ubah == 2) {
                printf("Masukkan harga baru: ");
                scanf("%lf", &target->harga);
                printf("Berhasil! Harga baru: Rp%.0f\n", target->harga);
            } else if (pilihan_ubah == 3) {
                printf("Masukkan stok baru: ");
                scanf("%d", &target->stok);
                printf("Berhasil! Stok baru: %d\n", target->stok);
            } else {
                printf("Pilihan tidak valid!\n");
            }
        } else {
            printf("Nomor menu minuman tidak valid!\n");
        }

    
    } else if (kategori == 3) {
        printf("\nPILIH PEGAWAI:\n");
        printf("1. %s\n2. %s\n", Rizki.nama, Adit.nama);
        printf("Pilih nomor (1-2): ");
        scanf("%d", &nomor_pegawai);

        Pegawai *target = NULL;
        if (nomor_pegawai == 1) target = &Rizki;
        else if (nomor_pegawai == 2) target = &Adit;

        if (target != NULL) {
            printf("\nAPA YANG MAU DIGANTI?\n");
            printf("1. Nama Pegawai\n2. ID Pegawai\n3. Gaji\n");
            printf("Pilih (1-3): ");
            scanf("%d", &pilihan_ubah);
            getchar();

            if (pilihan_ubah == 1) {
                printf("Masukkan nama pegawai baru: ");
                fgets(target->nama, sizeof(target->nama), stdin);
                target->nama[strcspn(target->nama, "\n")] = 0;
                printf("Berhasil! Nama baru: %s\n", target->nama);
            } else if (pilihan_ubah == 2) {
                printf("Masukkan ID pegawai baru: ");
                scanf("%d", &target->id_pegawai);
                printf("Berhasil! ID baru: %d\n", target->id_pegawai);
            } else if (pilihan_ubah == 3) {
                printf("Masukkan gaji baru: ");
                scanf("%lf", &target->gaji);
                printf("Berhasil! Gaji baru: Rp%.0f\n", target->gaji);
            } else {
                printf("Pilihan tidak valid!\n");
            }
        } else {
            printf("Nomor pegawai tidak valid!\n");
        }
    } else {
        printf("Kategori tidak valid!\n");
    }
    
    printf("DATA TERBARU SETELAH DIUBAH\n");
    printf("============================\n");

    printf("======= MENU MAKANAN =======\n\n");
    printf("Nama Menu: %s\n", ayam_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", ayam_goreng.harga);
    printf("Stok: %d\n\n", ayam_goreng.stok);

    printf("Nama Menu: %s\n", nasi_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", nasi_goreng.harga);
    printf("Stok: %d\n\n", nasi_goreng.stok);
    
    printf("Nama Menu: %s\n", tempe_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", tempe_goreng.harga);
    printf("Stok: %d\n\n", tempe_goreng.stok);
    
    printf("Nama Menu: %s\n", tahu_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", tahu_goreng.harga);
    printf("Stok: %d\n\n", tahu_goreng.stok);
    
    printf("Nama Menu: %s\n", ikan_goreng.nama_menumakan);
    printf("Harga: Rp%.0f\n", ikan_goreng.harga);
    printf("Stok: %d\n\n\n", ikan_goreng.stok);
    
    printf("======= MENU MINUMAN =======\n\n");
    printf("Nama Menu: %s\n", es_tehmanis.nama_menuminum);
    printf("Harga: Rp%.0f\n", es_tehmanis.harga);
    printf("Stok: %d\n\n", es_tehmanis.stok);

    printf("Nama Menu: %s\n", es_tehtawar.nama_menuminum);
    printf("Harga: Rp%.0f\n", es_tehtawar.harga);
    printf("Stok: %d\n\n", es_tehtawar.stok);
    
    printf("Nama Menu: %s\n", air_mineral.nama_menuminum);
    printf("Harga: Rp%.0f\n", air_mineral.harga);
    printf("Stok: %d\n\n\n", air_mineral.stok);
    
    printf("======= PEGAWAI =======\n\n");
    printf("Nama Pegawai: %s\n", Rizki.nama);
    printf("Id Pegawai: %d\n", Rizki.id_pegawai);
    printf("Gaji: Rp%.0f\n\n", Rizki.gaji);

    printf("Nama Pegawai: %s\n", Adit.nama);
    printf("Id Pegawai: %d\n", Adit.id_pegawai);
    printf("Gaji: Rp%.0f\n\n\n", Adit.gaji);

    return 0;
}