#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>


struct student
{
	char name[20];
	char class[20];
	char sex[20];
	char number[20];
	char telephone[20];
};

int num = 0;


void list();//���˵�
struct student stu[1001];
void address();//���
void search();//����
void search_name();
void search_class();
void search_number();
void search_telephone();

void delete();//ɾ��
void delete_name();
void delete_class();
void delete_number();
void delete_telephone();
void show();//��ʾ


int main()
{
	list();
	return 0;
}


void list()
{
	int a=0, k=0;
	printf("\tѧ��ͨѶ¼\n");
	printf("----------------------------------\n");
	printf("|\t 1.�����ϵ��\t\t |\n");//���
	printf("|\t 2.������ϵ��\t\t |\n");//���
	printf("|\t 3.ɾ����ϵ��\t\t |\n");
	printf("|\t 4.��ʾͨѶ¼\t\t |\n");//���
	printf("|\t 5.�˳��ó���\t\t |\n");//���
	printf("----------------------------------\n");
	printf("����ѡ�");
	scanf("%d", &a);
	switch (a)
	{
		case 1:
		{
			address();
			list();
		}
		case 2:
		{
			search();
			list();
		}
		case 3:
		{
			delete();
			list();
		}
		case 4:
		{
			show();
			list();
		}
		case 5:
			exit(0);
		default:
		{
			printf("�������(1����)(0�˳�)");
			scanf("%d", &k);
			if (1 == k)
				list();
			else
				exit(0);
				
		}


	}
}


void address()//���
{
	int i=0,k=0;

	for (i = 0; i < 1000; i++)
	{

		printf("\n��������:\n");
		scanf("%s", &stu[num].name);
		printf("\n����༶:\n");
		scanf("%s", &stu[num].class);
		printf("\n����ѧ��:\n");
		scanf("%s", &stu[num].number);
		printf("\n�����Ա�:\n");
		scanf("%s", &stu[num].sex);
		printf("\n����绰:\n");
		scanf("%s", &stu[num].telephone);
		num++;
		printf("�Ƿ�������(1����/0����)");
		scanf("%d", &k);
		if (1 == k)
			continue;
		else
			break;
	}



}


void show()//��ʾ
{
	int i , j = 0;
	if (0 == num)
		printf("������ϵ��\n");
	else
	{
		for (i = 0; i < num; i++)
		{
			printf("\t��%dλ��ϵ��\n", i + 1);
			printf("����:%s\t", stu[i].name);
			printf("�༶:%s\n", stu[i].class);
			printf("ѧ��:%s\t", stu[i].number);
			printf("�Ա�:%s\n", stu[i].sex);
			printf("�绰:%s\n\n", stu[i].telephone);
		}
	}

	printf("�Ƿ��������(1��/0��):");
	scanf("%d", &j);
	if (1 == j)
		list();
	else;
		exit(0);
}


void search()//����
{
	int i=0;
	printf("\n\tͨ�����ַ�ʽ����\n");
	printf("\t1.����\n");
	printf("\t2.�༶\n");
	printf("\t3.�绰\n");
	printf("\t4.ѧ��\n");
	printf("\t����ѡ��:");
	scanf("%d", &i);
	switch (i)
	{
	case 1:

		search_name();
		break;
	case 2:
		search_class();
		break;
	case 3:
		search_telephone();
		break;
	case 4:		
		search_number();
		break;
	default:
		printf("�������,��������\n");
		search();
		break;
	}
}

void search_name()
{
	int i = 0;
	char name1[20] = { 0 };
	printf("��������:");
	scanf("%s", name1);
	for (i; i < num; i++)
	{
		if (strcmp(stu[i].name, name1) == 0)
		{
			printf("����:%s\t", stu[i].name);
			printf("�༶:%s\n", stu[i].class);
			printf("ѧ��:%s\t", stu[i].number);
			printf("�Ա�:%s\n", stu[i].sex);
			printf("�绰:%s\n\n", stu[i].telephone);
			break;
		}

	}
	int a = 0;
	printf("�Ƿ��޸�(1��/0��):");
	scanf("%d", &a);
	if (1 == a)
	{
		int b = 0;
		printf("\nѡ���޸���Ŀ:1.���� 2.�༶ 3.ѧ�� 4.�Ա� 5.�绰:");
		scanf("%d", &b);
		switch (b)
		{
		case 1:
			printf("�޸�����:");
			scanf("%s", stu[i].name);
			break;
		case 2:
			printf("�޸İ༶:");
			scanf("%s", stu[i].class);
			break;
		case 3:
			printf("�޸�ѧ��:");
			scanf("%s", stu[i].number);
			break;
		case 4:
			printf("�޸��Ա�:");
			scanf("%s", stu[i].sex);
			break;
		case 5:
			printf("�޸ĵ绰:");
			scanf("%s", stu[i].telephone);
			break;
	
		}
		printf("�޸����");
	}
	else;
}
void search_class()
{
	int i = 0;
	char class1[20] = { 0 };
	printf("����༶:");
	scanf("%s", class1);
	for (i; i < num; i++)
	{
		if (strcmp(stu[i].class, class1) == 0)
		{
			printf("����:%s\t", stu[i].name);
			printf("�༶:%s\n", stu[i].class);
			printf("ѧ��:%s\t", stu[i].number);
			printf("�Ա�:%s\n", stu[i].sex);
			printf("�绰:%s\n\n", stu[i].telephone);
			break;
		}
	}
	int a = 0;
	printf("\n�Ƿ��޸�(1��/0��):");
	scanf("%d", &a);
	if (1 == a)
	{
		int b = 0;
		printf("\nѡ���޸���Ŀ:1.���� 2.�༶ 3.ѧ�� 4.�Ա� 5.�绰:");
		scanf("%d", &b);
		switch (b)
		{
		case 1:
			printf("�޸�����:");
			scanf("%s", stu[i].name);
			break;
		case 2:
			printf("�޸İ༶:");
			scanf("%s", stu[i].class);
			break;
		case 3:
			printf("�޸�ѧ��:");
			scanf("%s", stu[i].number);
			break;
		case 4:
			printf("�޸��Ա�:");
			scanf("%s", stu[i].sex);
			break;
		case 5:
			printf("�޸ĵ绰:");
			scanf("%s", stu[i].telephone);
			break;
		}
		printf("�޸����");
	}
}
void search_telephone()
{
	int i = 0;
	char telephone1[20] = { 0 };
	printf("����绰:");
	scanf("%s",telephone1);
	for (i; i < num; i++)
	{
		if (strcmp(stu[i].telephone, telephone1) == 0)
		{
			printf("����:%s\t", stu[i].name);
			printf("�༶:%s\n", stu[i].class);
			printf("ѧ��:%s\t", stu[i].number);
			printf("�Ա�:%s\n", stu[i].sex);
			printf("�绰:%s\n\n", stu[i].telephone);
			break;
		}
	}
	int a = 0, j = 0;
	printf("\n�Ƿ��޸�(1��/0��):");
	scanf("%d", &a);
	if (1 == a)
	{

		printf("\nѡ���޸���Ŀ:1.���� 2.�༶ 3.ѧ�� 4.�Ա� 5.�绰:");
		scanf("%d", &j);
		switch (j)
		{
		case 1:
			printf("�޸�����:");
			scanf("%s", stu[i].name);
			break;
		case 2:
			printf("�޸İ༶:");
			scanf("%s", stu[i].class);
			break;
		case 3:
			printf("�޸�ѧ��:");
			scanf("%s", stu[i].number);
			break;
		case 4:
			printf("�޸��Ա�:");
			scanf("%s", stu[i].sex);
			break;
		case 5:
			printf("�޸ĵ绰:");
			scanf("%s", stu[i].telephone);
			break;
		}
		printf("�޸����");
	}
}

void search_number()
{
	int i = 0;
	char number1[20] = { 0 };
	printf("����ѧ��:");
	scanf("%s",number1);
	for (i; i < num; i++)
	{
		if (strcmp(stu[i].number, number1) == 0)
		{
			printf("����:%s\t", stu[i].name);
			printf("�༶:%s\n", stu[i].class);
			printf("ѧ��:%s\t", stu[i].number);
			printf("�Ա�:%s\n", stu[i].sex);
			printf("�绰:%s\n\n", stu[i].telephone);
			break;
		}
	}
	int a = 0;
	printf("\n�Ƿ��޸�(1��/0��):");
	scanf("%d", &a);
	if (1 == a)
	{
		int b = 0;
		printf("\nѡ���޸���Ŀ:1.���� 2.�༶ 3.ѧ�� 4.�Ա� 5.�绰:");
		scanf("%d", &b);
		switch (b)
		{
		case 1:
			printf("�޸�����:");
			scanf("%s", stu[i].name);
			break;
		case 2:
			printf("�޸İ༶:");
			scanf("%s", stu[i].class);
			break;
		case 3:
			printf("�޸�ѧ��:");
			scanf("%s", stu[i].number);
			break;
		case 4:
			printf("�޸��Ա�:");
			scanf("%s", stu[i].sex);
			break;
		case 5:
			printf("�޸ĵ绰:");
			scanf("%s", stu[i].telephone);
			break;
		}
		printf("�޸����");
	}
}





void delete()
{
	int i = 0;
	printf("\n\tͨ�����ַ�ʽɾ��\n");
	printf("\t1.����\n");
	printf("\t2.�༶\n");
	printf("\t3.�绰\n");
	printf("\t4.ѧ��\n");
	printf("\t����ѡ��:");
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		delete_name();
		break;
	case 2:
		delete_class();
		break;
	case 3:
		delete_telephone();
		break;
	case 4:
		delete_number();
		break;
	default:
		printf("�������,��������\n");
		delete();
		break;
	}
}
void delete_name()
{
	int k = 0;
	char name2[20] = { 0 };
	printf("��������:");
	scanf("%s",name2);
	for (k; k < num; k++)
	{
		if (strcmp(stu[k].name, name2) == 0)
		{
			printf("����:%s\t", stu[k].name);
			printf("�༶:%s\n", stu[k].class);
			printf("ѧ��:%s\t", stu[k].number);
			printf("�Ա�:%s\n", stu[k].sex);
			printf("�绰:%s\n\n", stu[k].telephone);
			break;
		}

	}
	int j = 0;
	printf("\n�Ƿ�ɾ��:(1��/0��");
	scanf("%d", &j);
	if (1 == j)
	{
		for (k; k < num - 1; k++)
			stu[k] = stu[k + 1];
		num--;
		printf("ɾ�����");
	}
	else
		printf("ȡ��ɾ��");
}
void delete_class()
{
	int k = 0;
	char class2[20] = { 0 };
	printf("����༶:");
	scanf("%s", class2);
	for (k; k < num; k++)
	{
		if (strcmp(stu[k].class, class2) == 0)
		{
			printf("����:%s\t", stu[k].name);
			printf("�༶:%s\n", stu[k].class);
			printf("ѧ��:%s\t", stu[k].number);
			printf("�Ա�:%s\n", stu[k].sex);
			printf("�绰:%s\n\n", stu[k].telephone);
			break;
		}

	}
	int j = 0;
	printf("\n�Ƿ�ɾ��:(1��/0��");
	scanf("%d", &j);
	if (1 == j)
	{
		for (k; k < num - 1; k++)
			stu[k] = stu[k + 1];
		num--;
		printf("ɾ�����");
	}
	else
		printf("ȡ��ɾ��");
}
void delete_telephone()
{
	int k = 0;
	char telephone2[20] = { 0 };
	printf("����绰:");
	scanf("%s", telephone2);
	for (k; k < num; k++)
	{
		if (strcmp(stu[k].telephone, telephone2) == 0)
		{
			printf("����:%s\t", stu[k].name);
			printf("�༶:%s\n", stu[k].class);
			printf("ѧ��:%s\t", stu[k].number);
			printf("�Ա�:%s\n", stu[k].sex);
			printf("�绰:%s\n\n", stu[k].telephone);
			break;
		}

	}
	int j = 0;
	printf("\n�Ƿ�ɾ��:(1��/0��");
	scanf("%d", &j);
	if (1 == j)
	{
		for (k; k < num - 1; k++)
			stu[k] = stu[k + 1];
		num--;
		printf("ɾ�����");
	}
	else
		printf("ȡ��ɾ��");
}
void delete_number()
{
	int k = 0;
	char number2[20] = { 0 };
	printf("����ѧ��:");
	scanf("%s", number2);
	for (k; k < num; k++)
	{
		if (strcmp(stu[k].number, number2) == 0)
		{
			printf("����:%s\t", stu[k].name);
			printf("�༶:%s\n", stu[k].class);
			printf("ѧ��:%s\t", stu[k].number);
			printf("�Ա�:%s\n", stu[k].sex);
			printf("�绰:%s\n\n", stu[k].telephone);
			break;
		}

	}
	int j = 0;
	printf("\n�Ƿ�ɾ��:(1��/0��");
	scanf("%d", &j);
	if (1 == j)
	{
		for (k; k < num - 1; k++)
			stu[k] = stu[k + 1];
		num--;
		printf("ɾ�����");
	}
	else
		printf("ȡ��ɾ��");
}