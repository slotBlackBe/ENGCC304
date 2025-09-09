#include <stdio.h>

int main() {
    int choice;
    int money;
    int total = 0;
    int category;
    
    // เพิ่มตัวแปรสำหรับจำนวนสินค้าคงเหลือแต่ละชนิด
    int coke_stock = 5;
    int green_soda_stock = 5;
    int americano_stock = 3;
    int latte_stock = 3;
    int sunflower_seeds_stock = 10;
    int tou_pab_stock = 8;
    int jin_som_stock = 7;
    
    // เพิ่มตัวแปรสำหรับเงินที่อยู่ในตู้
    int machine_money = 0;

    printf("ใส่จำนวนเงินของคุณ: ");
    scanf("%d", &money);

    while (1) {
        printf("\n--- เงินของคุณ: %d บาท ---\n", money);
        printf("--- ยอดรวมสินค้า: %d บาท ---\n", total);
        
        printf("\nเลือกหมวดหมู่:\n");
        printf("1. เครื่องดื่ม\n");
        printf("2. ขนม\n");
        printf("0. จบการเลือกสินค้าและรับเงินทอน\n");
        printf("กรุณาเลือกหมวดหมู่: ");
        scanf("%d", &category);

        if (category == 0) {
            break; // ออกจากโปรแกรม
        }

        switch (category) {
            case 1:
                printf("\n--- เมนูเครื่องดื่ม ---\n");
                printf("1. โค้ก (10 บาท) - เหลือ %d ชิ้น\n", coke_stock);
                printf("2. น้ำเขียว (12 บาท) - เหลือ %d ชิ้น\n", green_soda_stock);
                printf("3. อเมริกาโน่ (30 บาท) - เหลือ %d ชิ้น\n", americano_stock);
                printf("4. ลาเต้ (35 บาท) - เหลือ %d ชิ้น\n", latte_stock);
                printf("กรุณาเลือกเครื่องดื่ม (กด 0 เพื่อกลับ): ");
                scanf("%d", &choice);

                if (choice == 0) {
                    continue;
                } else if (choice == 1) {
                    if (coke_stock > 0 && total + 10 <= money) {
                        total += 10;
                        coke_stock--;
                        printf("เลือก โค้ก เพิ่มแล้ว\n");
                    } else if (coke_stock == 0) {
                        printf("สินค้าหมด\n");
                    } else {
                        printf("เงินไม่พอ\n");
                    }
                } else if (choice == 2) {
                    if (green_soda_stock > 0 && total + 12 <= money) {
                        total += 12;
                        green_soda_stock--;
                        printf("เลือก น้ำเขียว เพิ่มแล้ว\n");
                    } else if (green_soda_stock == 0) {
                        printf("สินค้าหมด\n");
                    } else {
                        printf("เงินไม่พอ\n");
                    }
                } else if (choice == 3) {
                    if (americano_stock > 0 && total + 30 <= money) {
                        total += 30;
                        americano_stock--;
                        printf("เลือก อเมริกาโน่ เพิ่มแล้ว\n");
                    } else if (americano_stock == 0) {
                        printf("สินค้าหมด\n");
                    } else {
                        printf("เงินไม่พอ\n");
                    }
                } else if (choice == 4) {
                    if (latte_stock > 0 && total + 35 <= money) {
                        total += 35;
                        latte_stock--;
                        printf("เลือก ลาเต้ เพิ่มแล้ว\n");
                    } else if (latte_stock == 0) {
                        printf("สินค้าหมด\n");
                    } else {
                        printf("เงินไม่พอ\n");
                    }
                } else {
                    printf("ไม่มีสินค้าที่เลือกในหมวดหมู่นี้\n");
                }
                break;

            case 2:
                printf("\n--- เมนูขนม ---\n");
                printf("1. เมล็ดทานตะวัน (13 บาท) - เหลือ %d ชิ้น\n", sunflower_seeds_stock);
                printf("2. ถั่วแปบ (20 บาท) - เหลือ %d ชิ้น\n", tou_pab_stock);
                printf("3. จิ้นส้มหมก (15 บาท) - เหลือ %d ชิ้น\n", jin_som_stock);
                printf("กรุณาเลือกขนม (กด 0 เพื่อกลับ): ");
                scanf("%d", &choice);

                if (choice == 0) {
                    continue;
                } else if (choice == 1) {
                    if (sunflower_seeds_stock > 0 && total + 13 <= money) {
                        total += 13;
                        sunflower_seeds_stock--;
                        printf("เลือก เมล็ดทานตะวัน เพิ่มแล้ว\n");
                    } else if (sunflower_seeds_stock == 0) {
                        printf("สินค้าหมด\n");
                    } else {
                        printf("เงินไม่พอ\n");
                    }
                } else if (choice == 2) {
                    if (tou_pab_stock > 0 && total + 20 <= money) {
                        total += 20;
                        tou_pab_stock--;
                        printf("เลือก ถั่วแปบ เพิ่มแล้ว\n");
                    } else if (tou_pab_stock == 0) {
                        printf("สินค้าหมด\n");
                    } else {
                        printf("เงินไม่พอ\n");
                    }
                } else if (choice == 3) {
                    if (jin_som_stock > 0 && total + 15 <= money) {
                        total += 15;
                        jin_som_stock--;
                        printf("เลือก จิ้นส้มหมก เพิ่มแล้ว\n");
                    } else if (jin_som_stock == 0) {
                        printf("สินค้าหมด\n");
                    } else {
                        printf("เงินไม่พอ\n");
                    }
                } else {
                    printf("ไม่มีสินค้าที่เลือกในหมวดหมู่นี้\n");
                }
                break;

            default:
                printf("ไม่มีหมวดหมู่ที่เลือก\n");
                break;
        }

        printf("ราคารวมปัจจุบัน: %d บาท\n", total);
    }

    printf("\nยอดรวมทั้งหมด: %d บาท\n", total);
    
    // คำนวณเงินทอนและอัปเดตเงินในตู้
    int change = money - total;
    if (change >= 0) {
        printf("คุณซื้อสินค้าสำเร็จ! เงินทอน: %d บาท\n", change);
        machine_money += total;
    } else {
        printf("เงินไม่พอครับ ต้องการ %d บาท แต่คุณมี %d บาท\n", total, money);
        // ถ้าเงินไม่พอ เงินที่ผู้ใช้ใส่เข้ามาก็จะไม่ถูกหัก
        change = money;
    }

    printf("เงินที่อยู่ในตู้ตอนนี้: %d บาท\n", machine_money);

    return 0;
}