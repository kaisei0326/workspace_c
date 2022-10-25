int main(void)
{
    int max_number;
    int min_number;
    int question_number;
    int answer;
    
    printf("4桁の数（1～9999）を思い浮かべてください\n");
    
    max_number = 9999;
    min_number = 1;
    
    while (max_number != min_number){
        question_number = (max_number + min_number) / 2;
    
        printf("\nあなたが思い浮かべている数は%dより大きいですか？\n", question_number);
        printf("「はい」なら0を、「いいえ」なら1を入力してください=");
        scanf("%d", &answer);
        
        while (answer != 0 && answer != 1){
            printf("0か1で答えてください=");
            scanf("%d", &answer);
        }
        
        if (answer == 0){
            min_number = question_number + 1;
        }
        else {
            max_number = question_number;
        }
    }
    
    printf("\nあなたが思い浮かべた数は%dですね\n", max_number);
    
    return (0);
}
