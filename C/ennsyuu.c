#define SIZE 304 //600�����߂�

short	a[SIZE],x[SIZE]//�搔
		,b[SIZE]//����
		,c[SIZE]//���q
		,ans[SIZE]
		,ans2[SIZE]
		,pos[SIZE]
		,pos2[SIZE]
		,val_2[SIZE]={2}// 2
		,val_4[SIZE]={4};// 4

int main(){
	int i;
	int flag=0;//�����Z/�����Z�����݂ɍs���t���O

	b[0]=1;//����
	c[SIZE-1]=1;//���q
	x[0]=5;//�搔
	for(i=0;i<SIZE;i++) a[i]=x[i];
	div(c,x,ans,SIZE);
	for(i=0;i<SIZE;i++) c[i]=0;c[SIZE-1]=1;//����Z�ɂ�蕪�q�̓��e���j�󂳂�邽�ߍĐݒ�
	
	do{
		mul(a,x,pos2,SIZE);
		mul(x,pos2,a,SIZE);
		add(b,val_2,b,SIZE);
		mul(b,a,pos2,SIZE);

		div(c,pos2,pos,SIZE);
		for(i=0;i<SIZE;i++) c[i]=0;c[SIZE-1]=1;//����Z�ɂ�蕪�q�̓��e���j�󂳂�邽�ߍĐݒ�

		if(flag=(!flag)){
			sub(ans,pos,ans,SIZE);
		}else{
			add(ans,pos,ans,SIZE);
		}
	}while(cmp0(pos,SIZE)!=0);


	flag=0;//�����Z/�����Z�����݂ɍs���t���O

	for(i=0;i<SIZE;i++){ c[i]=0;x[i]=0;b[i]=0;}
	b[0]=1;//����
	c[SIZE-1]=1;//���q
	x[0]=39;//�搔
	x[1]=2;
	for(i=0;i<SIZE;i++) a[i]=x[i];
	div(c,x,ans2,SIZE);
	for(i=0;i<SIZE;i++) c[i]=0;c[SIZE-1]=1;//����Z�ɂ�蕪�q�̓��e���j�󂳂�邽�ߍĐݒ�
	
	do{
		mul(a,x,pos2,SIZE);
		mul(x,pos2,a,SIZE);
		add(b,val_2,b,SIZE);
		mul(b,a,pos2,SIZE);

		div(c,pos2,pos,SIZE);
		for(i=0;i<SIZE;i++) c[i]=0;c[SIZE-1]=1;//����Z�ɂ�蕪�q�̓��e���j�󂳂�邽�ߍĐݒ�

		if(flag=(!flag)){
			sub(ans2,pos,ans2,SIZE);
		}else{
			add(ans2,pos,ans2,SIZE);
		}
	}while(cmp0(pos,SIZE)!=0);

	mul(ans,val_4,pos,SIZE);
	sub(pos,ans2,pos,SIZE);
	mul(pos,val_4,pos2,SIZE);


	dp_print(pos2,SIZE,3);//�덷�������邽�߉�6����؂�̂ĂČŒ菬���_�`���ŕ\��
	printf("\n");

	return 0;
}