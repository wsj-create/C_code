#define _CRT_SECURE_NO_WARNINGS 1

int main()
{
	srand((unsigned int)time(NULL));
	int select=0;
	menu();
	
	do
	{
		//int select;
		printf("<--��ѡ��-->");
		scanf("%d", &select);
		switch (select)
		{
		case 0:
			printf("<--���˳�-->\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("<--,���벻�Ϸ���������ѡ��-->\n");
			break;
		}
	}
	while (select);


	return 0;
}