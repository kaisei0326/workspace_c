int bombsearch(int x, int y)             //変数aはボムの数
{
	int a = 0;
	
	if (x != 0 && y != 0 && map[x-1][y-1] == -2)a++;
	if (y != 0 && map[x][y-1] == -2)a++;
	if (x != 8 && y != 0 && map[x+1][y-1] == -2)a++;
	if (x != 0 && map[x-1][y] == -2)a++;
	if (x != 8 && map[x+1][y] == -2)a++;
	if (x != 0 && y != 8 && map[x-1][y+1] == -2)a++;
	if (y != 8 && map[x][y+1] == -2)a++;
	if (x != 8 && y != 8 && map[x+1][y+1] == -2)a++;
	
	return(a);
}

//ばぐがなおったーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーーー
//。。。。。。