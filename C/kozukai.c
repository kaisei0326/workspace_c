#include <stdio.h>

typedef struct {
    char name[40];
    int price;
    int mon;
    int date;
    int cl;
} item;


void input(item *p, int *n);
void disp_menu(item *p, int n);
void disp_all(item *p, int n);
void disp_class(item *p, int n);

int main()
{
    item itemlist[300];
    int n = 0;
    int x;

    int money;
    printf("今月のお小遣い金額>> ");
    scanf("%d", &money);

    do {
        printf("1:表示\n");
        printf("2:入力\n");
        printf("0:終了\n");
        printf("選択してください>> ");
        scanf("%d", &x);

        switch (x) {
            case 1:
                printf("表示が選択されました\n");
                disp_menu(itemlist, n);
                break;

            case 2:
                printf("入力が表示されました\n");
                input(itemlist, &n);
                break;

            case 0:
                printf("終了します。\n");
        }
    } while (x);

    return 0;
}

void input(item *p, int *n)
{
    printf("購入した物品の情報を記録します。\n");
    printf("購入した物品の名称>> ");
    scanf("%s", p[*n].name);
    printf("購入した物品の金額>> ");
    scanf("%d", &p[*n].price);
    printf("購入した月>> ");
    scanf("%d", &p[*n].mon);
    printf("購入した日>> ");
    scanf("%d", &p[*n].date);
    printf("購入した物品の種類（１：資格等、２：文房具、３：おかし,４：交際費、５：その他) >> ");
    scanf("%d", &p[*n].cl);
    (*n)++;
}

void disp_menu(item *p, int n)
{
    int x;
    do {
        printf("1:出費一覧（全体）\n");
        printf("2:出費一覧（項目別）\n");
        printf("0:戻る\n");
        printf("選択してください>> ");
        scanf("%d", &x);

        switch(x) {
            case 1:
                printf("出費一覧（全体）が選択されました\n");
                disp_all(p, n);
                break;

            case 2:
                printf("消費一覧（項目別）が選択されました\n");
                disp_class(p, n);
                break;
                
            case 0:
                printf("戻ります。\n");
                break;
            
            default:
                printf("正確な数字を入力してください。\n");
        }
    }while (x);
}

void disp_all(item *p, int n)
{
    int i;
    int sum = 0;
    printf("日付\t名称\t金額\t項目\n");
    for (i = 0; i < n; i++) {
        printf("%d月%d日\t", p[i].mon, p[i].date);
        printf("%s\t", p[i].name);
        printf("%d円\t", p[i].price);
        switch (p[i].cl) {
            case 1:
                printf("資格試験等\n");
                break;
            case 2:
                printf("文房具\n");
                break;
            case 3:
                printf("おかし\n");
                break;
            case 4:
                printf("交際費\n");
                break;
            case 5:
                printf("その他\n");
                break;
            default:
                printf("ほげほげ\n");
        }
        sum += p[i].price;
    }
    printf("出費の合計金額：%d円\n", sum);
}

void disp_class(item *p, int n)
{
    int i;
    int sum = 0;
    int x;

    printf("表示する項目を選択してください\n");
    printf("1:資格試験等\n");
    printf("2:文房具\n");
    printf("3:おかし\n");
    printf("4:交際費\n");
    printf("5:その他\n");
    printf(">> ");
    scanf("%d", &x);

    printf("日付\t名称\t金額\t項目\t");
    for (i = 0; i < n; i++) {
        if (x == p[i].cl) {
            printf("%d月%d日\t", p[i].mon, p[i].date);
            printf("%s\t", p[i].name);
            printf("%d円\t", p[i].price);
            switch(p[i].cl) {
                case 1:
                    printf("資格試験等\n");
                    break;
                case 2:
                    printf("文房具\n");
                    break;
                case 3:
                    printf("おかし\n");
                    break;
                case 4:
                    printf("交際費\n");
                    break;
                case 5:
                    printf("その他\n");
                    break;
                default:
                    printf("ほげほげ\n");
            }
            sum += p[i].price;
        }
    }

    printf("この項目の出費の合計:%d円\n", sum);
}
