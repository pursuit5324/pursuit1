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


void list();//主菜单
struct student stu[1001];
void address();//添加
void search();//查找
void search_name();
void search_class();
void search_number();
void search_telephone();

void delete();//删除
void delete_name();
void delete_class();
void delete_number();
void delete_telephone();
void show();//显示


int main()
{
	list();
	return 0;
}


void list()
{
	int a=0, k=0;
	printf("\t学生通讯录\n");
	printf("----------------------------------\n");
	printf("|\t 1.添加联系人\t\t |\n");//完成
	printf("|\t 2.查找联系人\t\t |\n");//完成
	printf("|\t 3.删除联系人\t\t |\n");
	printf("|\t 4.显示通讯录\t\t |\n");//完成
	printf("|\t 5.退出该程序\t\t |\n");//完成
	printf("----------------------------------\n");
	printf("输入选项：");
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
			printf("输入错误(1继续)(0退出)");
			scanf("%d", &k);
			if (1 == k)
				list();
			else
				exit(0);
				
		}


	}
}


void address()//添加
{
	int i=0,k=0;

	for (i = 0; i < 1000; i++)
	{

		printf("\n输入姓名:\n");
		scanf("%s", &stu[num].name);
		printf("\n输入班级:\n");
		scanf("%s", &stu[num].class);
		printf("\n输入学号:\n");
		scanf("%s", &stu[num].number);
		printf("\n输入性别:\n");
		scanf("%s", &stu[num].sex);
		printf("\n输入电话:\n");
		scanf("%s", &stu[num].telephone);
		num++;
		printf("是否继续添加(1继续/0结束)");
		scanf("%d", &k);
		if (1 == k)
			continue;
		else
			break;
	}



}


void show()//显示
{
	int i , j = 0;
	if (0 == num)
		printf("暂无联系人\n");
	else
	{
		for (i = 0; i < num; i++)
		{
			printf("\t第%d位联系人\n", i + 1);
			printf("姓名:%s\t", stu[i].name);
			printf("班级:%s\n", stu[i].class);
			printf("学号:%s\t", stu[i].number);
			printf("性别:%s\n", stu[i].sex);
			printf("电话:%s\n\n", stu[i].telephone);
		}
	}

	printf("是否继续服务(1是/0否):");
	scanf("%d", &j);
	if (1 == j)
		list();
	else;
		exit(0);
}


void search()//查找
{
	int i=0;
	printf("\n\t通过那种方式查找\n");
	printf("\t1.姓名\n");
	printf("\t2.班级\n");
	printf("\t3.电话\n");
	printf("\t4.学号\n");
	printf("\t输入选项:");
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
		printf("输入错误,重新输入\n");
		search();
		break;
	}
}

void search_name()
{
	int i = 0;
	char name1[20] = { 0 };
	printf("输入姓名:");
	scanf("%s", name1);
	for (i; i < num; i++)
	{
		if (strcmp(stu[i].name, name1) == 0)
		{
			printf("姓名:%s\t", stu[i].name);
			printf("班级:%s\n", stu[i].class);
			printf("学号:%s\t", stu[i].number);
			printf("性别:%s\n", stu[i].sex);
			printf("电话:%s\n\n", stu[i].telephone);
			break;
		}

	}
	int a = 0;
	printf("是否修改(1是/0否):");
	scanf("%d", &a);
	if (1 == a)
	{
		int b = 0;
		printf("\n选择修改项目:1.姓名 2.班级 3.学号 4.性别 5.电话:");
		scanf("%d", &b);
		switch (b)
		{
		case 1:
			printf("修改姓名:");
			scanf("%s", stu[i].name);
			break;
		case 2:
			printf("修改班级:");
			scanf("%s", stu[i].class);
			break;
		case 3:
			printf("修改学号:");
			scanf("%s", stu[i].number);
			break;
		case 4:
			printf("修改性别:");
			scanf("%s", stu[i].sex);
			break;
		case 5:
			printf("修改电话:");
			scanf("%s", stu[i].telephone);
			break;
	
		}
		printf("修改完成");
	}
	else;
}
void search_class()
{
	int i = 0;
	char class1[20] = { 0 };
	printf("输入班级:");
	scanf("%s", class1);
	for (i; i < num; i++)
	{
		if (strcmp(stu[i].class, class1) == 0)
		{
			printf("姓名:%s\t", stu[i].name);
			printf("班级:%s\n", stu[i].class);
			printf("学号:%s\t", stu[i].number);
			printf("性别:%s\n", stu[i].sex);
			printf("电话:%s\n\n", stu[i].telephone);
			break;
		}
	}
	int a = 0;
	printf("\n是否修改(1是/0否):");
	scanf("%d", &a);
	if (1 == a)
	{
		int b = 0;
		printf("\n选择修改项目:1.姓名 2.班级 3.学号 4.性别 5.电话:");
		scanf("%d", &b);
		switch (b)
		{
		case 1:
			printf("修改姓名:");
			scanf("%s", stu[i].name);
			break;
		case 2:
			printf("修改班级:");
			scanf("%s", stu[i].class);
			break;
		case 3:
			printf("修改学号:");
			scanf("%s", stu[i].number);
			break;
		case 4:
			printf("修改性别:");
			scanf("%s", stu[i].sex);
			break;
		case 5:
			printf("修改电话:");
			scanf("%s", stu[i].telephone);
			break;
		}
		printf("修改完成");
	}
}
void search_telephone()
{
	int i = 0;
	char telephone1[20] = { 0 };
	printf("输入电话:");
	scanf("%s",telephone1);
	for (i; i < num; i++)
	{
		if (strcmp(stu[i].telephone, telephone1) == 0)
		{
			printf("姓名:%s\t", stu[i].name);
			printf("班级:%s\n", stu[i].class);
			printf("学号:%s\t", stu[i].number);
			printf("性别:%s\n", stu[i].sex);
			printf("电话:%s\n\n", stu[i].telephone);
			break;
		}
	}
	int a = 0, j = 0;
	printf("\n是否修改(1是/0否):");
	scanf("%d", &a);
	if (1 == a)
	{

		printf("\n选择修改项目:1.姓名 2.班级 3.学号 4.性别 5.电话:");
		scanf("%d", &j);
		switch (j)
		{
		case 1:
			printf("修改姓名:");
			scanf("%s", stu[i].name);
			break;
		case 2:
			printf("修改班级:");
			scanf("%s", stu[i].class);
			break;
		case 3:
			printf("修改学号:");
			scanf("%s", stu[i].number);
			break;
		case 4:
			printf("修改性别:");
			scanf("%s", stu[i].sex);
			break;
		case 5:
			printf("修改电话:");
			scanf("%s", stu[i].telephone);
			break;
		}
		printf("修改完成");
	}
}

void search_number()
{
	int i = 0;
	char number1[20] = { 0 };
	printf("输入学号:");
	scanf("%s",number1);
	for (i; i < num; i++)
	{
		if (strcmp(stu[i].number, number1) == 0)
		{
			printf("姓名:%s\t", stu[i].name);
			printf("班级:%s\n", stu[i].class);
			printf("学号:%s\t", stu[i].number);
			printf("性别:%s\n", stu[i].sex);
			printf("电话:%s\n\n", stu[i].telephone);
			break;
		}
	}
	int a = 0;
	printf("\n是否修改(1是/0否):");
	scanf("%d", &a);
	if (1 == a)
	{
		int b = 0;
		printf("\n选择修改项目:1.姓名 2.班级 3.学号 4.性别 5.电话:");
		scanf("%d", &b);
		switch (b)
		{
		case 1:
			printf("修改姓名:");
			scanf("%s", stu[i].name);
			break;
		case 2:
			printf("修改班级:");
			scanf("%s", stu[i].class);
			break;
		case 3:
			printf("修改学号:");
			scanf("%s", stu[i].number);
			break;
		case 4:
			printf("修改性别:");
			scanf("%s", stu[i].sex);
			break;
		case 5:
			printf("修改电话:");
			scanf("%s", stu[i].telephone);
			break;
		}
		printf("修改完成");
	}
}





void delete()
{
	int i = 0;
	printf("\n\t通过那种方式删除\n");
	printf("\t1.姓名\n");
	printf("\t2.班级\n");
	printf("\t3.电话\n");
	printf("\t4.学号\n");
	printf("\t输入选项:");
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
		printf("输入错误,重新输入\n");
		delete();
		break;
	}
}
void delete_name()
{
	int k = 0;
	char name2[20] = { 0 };
	printf("输入姓名:");
	scanf("%s",name2);
	for (k; k < num; k++)
	{
		if (strcmp(stu[k].name, name2) == 0)
		{
			printf("姓名:%s\t", stu[k].name);
			printf("班级:%s\n", stu[k].class);
			printf("学号:%s\t", stu[k].number);
			printf("性别:%s\n", stu[k].sex);
			printf("电话:%s\n\n", stu[k].telephone);
			break;
		}

	}
	int j = 0;
	printf("\n是否删除:(1是/0否）");
	scanf("%d", &j);
	if (1 == j)
	{
		for (k; k < num - 1; k++)
			stu[k] = stu[k + 1];
		num--;
		printf("删除完成");
	}
	else
		printf("取消删除");
}
void delete_class()
{
	int k = 0;
	char class2[20] = { 0 };
	printf("输入班级:");
	scanf("%s", class2);
	for (k; k < num; k++)
	{
		if (strcmp(stu[k].class, class2) == 0)
		{
			printf("姓名:%s\t", stu[k].name);
			printf("班级:%s\n", stu[k].class);
			printf("学号:%s\t", stu[k].number);
			printf("性别:%s\n", stu[k].sex);
			printf("电话:%s\n\n", stu[k].telephone);
			break;
		}

	}
	int j = 0;
	printf("\n是否删除:(1是/0否）");
	scanf("%d", &j);
	if (1 == j)
	{
		for (k; k < num - 1; k++)
			stu[k] = stu[k + 1];
		num--;
		printf("删除完成");
	}
	else
		printf("取消删除");
}
void delete_telephone()
{
	int k = 0;
	char telephone2[20] = { 0 };
	printf("输入电话:");
	scanf("%s", telephone2);
	for (k; k < num; k++)
	{
		if (strcmp(stu[k].telephone, telephone2) == 0)
		{
			printf("姓名:%s\t", stu[k].name);
			printf("班级:%s\n", stu[k].class);
			printf("学号:%s\t", stu[k].number);
			printf("性别:%s\n", stu[k].sex);
			printf("电话:%s\n\n", stu[k].telephone);
			break;
		}

	}
	int j = 0;
	printf("\n是否删除:(1是/0否）");
	scanf("%d", &j);
	if (1 == j)
	{
		for (k; k < num - 1; k++)
			stu[k] = stu[k + 1];
		num--;
		printf("删除完成");
	}
	else
		printf("取消删除");
}
void delete_number()
{
	int k = 0;
	char number2[20] = { 0 };
	printf("输入学号:");
	scanf("%s", number2);
	for (k; k < num; k++)
	{
		if (strcmp(stu[k].number, number2) == 0)
		{
			printf("姓名:%s\t", stu[k].name);
			printf("班级:%s\n", stu[k].class);
			printf("学号:%s\t", stu[k].number);
			printf("性别:%s\n", stu[k].sex);
			printf("电话:%s\n\n", stu[k].telephone);
			break;
		}

	}
	int j = 0;
	printf("\n是否删除:(1是/0否）");
	scanf("%d", &j);
	if (1 == j)
	{
		for (k; k < num - 1; k++)
			stu[k] = stu[k + 1];
		num--;
		printf("删除完成");
	}
	else
		printf("取消删除");
}