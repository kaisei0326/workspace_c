int main(void)
{
    int max_number;
    int min_number;
    int question_number;
    int answer;
    
    printf("4���̐��i1�`9999�j���v�������ׂĂ�������\n");
    
    max_number = 9999;
    min_number = 1;
    
    while (max_number != min_number){
        question_number = (max_number + min_number) / 2;
    
        printf("\n���Ȃ����v�������ׂĂ��鐔��%d���傫���ł����H\n", question_number);
        printf("�u�͂��v�Ȃ�0���A�u�������v�Ȃ�1����͂��Ă�������=");
        scanf("%d", &answer);
        
        while (answer != 0 && answer != 1){
            printf("0��1�œ����Ă�������=");
            scanf("%d", &answer);
        }
        
        if (answer == 0){
            min_number = question_number + 1;
        }
        else {
            max_number = question_number;
        }
    }
    
    printf("\n���Ȃ����v�������ׂ�����%d�ł���\n", max_number);
    
    return (0);
}
