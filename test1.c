#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	srand((unsigned int)time(NULL));
	int select=0;
	menu();
	
	do
	{
		//int select;
		printf("<--请选择-->");
		scanf("%d", &select);
		switch (select)
		{
		case 0:
			printf("<--已退出-->\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("<--,输入不合法，请重新选择-->\n");
			break;
		}
	}
	while (select);


	return 0;
}