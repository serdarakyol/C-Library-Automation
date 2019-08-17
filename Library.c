#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct books{
	char name[40];
	int year;
	char author[40];
	char category[40];
	struct books *next;
	int area;
};
struct areas{
	int id;
	char title[40];
	struct books *book;
	struct areas *next;
            };
typedef struct books bk;
typedef struct areas ar;
ar * add_book(ar *a_area,bk *new_book){
	ar *curr_area;
	bk *curr_book;
	if(a_area->book==NULL){
		a_area->book=(bk *)malloc(sizeof(bk));
		a_area->book=new_book;
		a_area->book->next=NULL;
		return a_area;
	}
	else if(a_area->book!=NULL){
	for(curr_area=a_area;new_book->area!=curr_area->id;curr_area=curr_area->next);
		  if(curr_area->book==NULL) {
			curr_area->book=(bk *)malloc(sizeof(bk));
			curr_area->book=new_book;
			curr_area->book->next==NULL;
			return a_area;
		}
		else if(curr_area->book!=NULL){
			for(curr_book=curr_area->book;curr_book->next!=NULL;curr_book=curr_book->next);
			curr_book->next=new_book;
			return a_area;
		}
	}
}
void schedule_of_area(ar *a_area){
	ar *current_area;
	for(current_area=a_area;current_area!=NULL;current_area=current_area->next)
	printf("%d %s \n",current_area->id,current_area->title);
}
bk *schedule_of_all_books(FILE *book_ftp){
	int i,j,t=0;
	bk *a_book,*current_book;
	a_book=(bk *)malloc(sizeof(bk));
	current_book=a_book;
	book_ftp=fopen("Books.txt","r");
	fscanf(book_ftp, "%*[^\n]\n", NULL);
	if(book_ftp==NULL){
		printf("File is not Found.\n");
	}
	else{
		while(!feof(book_ftp)){
			fscanf(book_ftp,"%s %s %s %d %d",current_book->name,current_book->author,current_book->category,&(current_book->year),&(current_book->area));
			current_book->next=(bk *)malloc(sizeof(bk));
			current_book=current_book->next;
			current_book->next=NULL;
		}
}
	for(current_book=a_book;current_book!=NULL;current_book=current_book->next){
	}
	return a_book;
}
bk *all_of_book_to_all_books_schedule(bk *a_of_all_books,bk *a_book){
	bk *current_book;
	printf("%s\n",a_of_all_books);
	for(current_book=a_of_all_books;current_book->next!=NULL;current_book=current_book->next);
	current_book->next=a_book;
	a_book->next=NULL;
}
void ad_area(ar *q){
	int number,i;
	char category[40];
	ar *tempfile_area,*it_area;
	it_area=q;
	puts("Please Join A Area Name : ");
	getchar();
	gets(category);
	if(category[0]<=122 && category[0]>=97)
		category[0]=category[0]-32;
		while(it_area->next!=NULL){
			it_area=it_area->next;
			number=(it_area->id)+1;
		}
		printf("%d\n",number);
		tempfile_area=(ar *)malloc(sizeof(ar));
		tempfile_area->id=number;
		strcpy(tempfile_area->title,category);
		tempfile_area->book=NULL;
		tempfile_area->next=NULL;
		it_area->next=tempfile_area;
		tempfile_area=q;
		while(tempfile_area!=NULL){
			printf("%-5d %-25s \n",tempfile_area->id,tempfile_area->title);	
			tempfile_area=tempfile_area->next;
		}
	}
ar* join_a_book_to_choose_an_area(ar *a_area,bk *a_all_books){
	ar *curr_area,*a_tempfile_area;
	bk *curr_book;
	int area_number,recorder=0,x;
	char name[40],author[40],category[40];
	a_tempfile_area=a_area;
	schedule_of_area(a_area);
	puts("Areas are registered.Enter a number of area for a book: ");
	scanf("%d",&area_number);
	for(curr_area=a_area;(curr_area->id)!=area_number;curr_area=curr_area->next){
	}
		{	puts("Please Enter First Letter and Other Letter is small.");	
			printf("You are joined new book = %d. Area's name = %s \n",curr_area->id,curr_area->title);
			if(curr_area->book==NULL){
				curr_area->book=(bk *)malloc(sizeof(bk));
				puts("Join a name = ");
				getchar();
				gets(name);
				if(name[0]<=122 && name[0]>=97)
					name[0]=name[0]-32;
				strcpy(curr_area->book->name,name);
				puts("Writer= ");
				gets(author);
				if(author[0]<=122 && author[0]>=97)
					author[0]=author[0]-32;
				strcpy(curr_area->book->author,author);
				puts("Category = ");
				gets(category);
				if(category[0]<=122 && category[0]>=97)
					category[0]=category[0]-32;
				strcpy(curr_area->book->category,category);
				puts("Year =");
				scanf("%d",&(curr_area->book->year));
				curr_book->area=curr_area->id;
				printf("Area = %d \n",curr_area->id);
				curr_area->book->next=NULL;
				curr_book=curr_area->book;
				printf("%-25s %-25s %-25s %-5d \n",curr_book->name,curr_book->author,curr_book->category,curr_book->year);
				all_of_book_to_all_books_schedule(a_all_books,curr_book);
				return a_tempfile_area;
			}
			else{
				for(curr_book=curr_area->book;curr_book->next!=NULL;curr_book=curr_book->next);
				curr_book->next=(bk*)malloc(sizeof(bk));
				curr_book=curr_book->next;
				curr_book->next=NULL;
				puts("Name =");
				getchar();
				gets(name);
				if(name[0]<=122 && name[0]>=97)
					name[0]=name[0]-32;
				strcpy(curr_book->name,name);
				puts("Writer =");
				gets(author);
				if(author[0]<=122 && author[0]>=97)
					author[0]=author[0]-32;
				strcpy(curr_book->author,author);
				printf("Category = ");
				gets(category);
				if(category[0]<=122 && category[0]>=97)
					category[0]=category[0]-32;
				strcpy(curr_book->category,category);
				puts("Year = ");
				scanf("%d",&(curr_book->year));
				curr_book->area=curr_area->id;
				printf("Area = %d\n",curr_area->id);
				printf("%-25s %-25s %-25s %-5d\n",curr_book->name,curr_book->author,curr_book->category,curr_book->year);
				all_of_book_to_all_books_schedule(a_all_books,curr_book);
				return a_tempfile_area;
				}
			}
		printf("%s %s %s %d \n",curr_book->name,curr_book->author,curr_book->category,curr_book->year);
	}
bk *alphabetic_sort(bk *a_all_of_books){
	char tmp_bookname[40];
	char tmp_author[40];
	char tmp_category[40];
	int tmp_year;
	int tmp_area;
	bk *tmp_a_all_of_books;
	tmp_a_all_of_books=a_all_of_books;
	bk *current_book,*tmp_book;
	for(tmp_book=tmp_a_all_of_books;tmp_book!=NULL;tmp_book=tmp_book->next)
    {
        for(current_book=tmp_a_all_of_books;current_book->next!=NULL;current_book=current_book->next)
        {
            if(strcmp(current_book->name,current_book->next->name)>0)
            {
                strcpy(tmp_bookname, current_book->name);
                strcpy(current_book->name, current_book->next->name);
                strcpy(current_book->next->name,tmp_bookname);
                strcpy(tmp_author,current_book->author);
                strcpy(current_book->author, current_book->next->author);
                strcpy(current_book->next->author,tmp_author);
                strcpy(tmp_category,current_book->category);
                strcpy(current_book->category,current_book->next->category);
                strcpy(current_book->next->category,tmp_category);
                tmp_year=current_book->year;
                current_book->year=current_book->next->year;
                current_book->next->year=tmp_year;
                tmp_area=current_book->area;
                current_book->area=current_book->next->area;
                current_book->next->area=tmp_area;
            }
        }
    }
    for(current_book=a_all_of_books;current_book!=NULL;current_book=current_book->next){
		printf("%-25s %-25s %-25s %-5d %-5d \n",current_book->name,current_book->author,current_book->category,current_book->year,current_book->area);
	}
	return a_all_of_books;
}
void knowladge_of_area(ar *a_area){
	int number,cou=0;
	ar *current_area;
	bk *current_book;
	schedule_of_area(a_area);
	puts("Join the number of Area for knowladge of area = ");
	scanf("%d",&number);
	for(current_area=a_area;current_area!=NULL;current_area=current_area->next){
		if(number==current_area->id){
			printf("Knowladge = %d , Area is = %s \n",current_area->id,current_area->title);
			for(current_book=current_area->book;current_book!=NULL;current_book=current_book->next){
			printf("%-25s %-25s %-25s %-5d %-5d \n",current_book->name,current_book->author,current_book->category,current_book->year,current_book->area);
			cou++;
		}
	}
}
	if(cou==0){
		puts("Not exist.");
		puts("\n");
	}
}
ar* del(ar* a_area){
	int number;
	ar *it, *tmp;
	schedule_of_area(a_area);
	puts("Join the area for deleting = ");
	scanf("%d",&number);
	it=a_area;
	if(a_area->id==number){
		tmp=a_area;
		a_area=a_area->next;
		free(tmp);
		schedule_of_area(a_area);
		return a_area;
	}
	while(it->next!=NULL && it->next->id!=number){
		it=it->next;
	}
	if(it->next==NULL){
		puts("Number is not exist.");
		puts("\n");
		return a_area;
	}
	tmp=it->next;
	it->next=it->next->next;
	free(tmp);
	schedule_of_area(a_area);
	return a_area;
}
void examine_author(bk *a_book){
	int coun=0;
	bk *current_book;
	char author[40];
	puts("Author name =");
	scanf("%s",&author);
	for(current_book=a_book;current_book!=NULL;current_book=current_book->next){
		if(strcmp(current_book->author,author)==0){
			printf("%-25s %-25s %-25s %-5d %-5d\n",current_book->name,current_book->author,current_book->category,current_book->year,current_book->area);
			coun=1;
			}
	}
	if(coun==0){
		puts("Author is not exist. \n");
		}
}
void examine_category(bk *a_book){
	int coun=0;
	bk *current_book;
	char category[40];
	puts("Category : ");
	scanf("%s",category);
	for(current_book=a_book;current_book!=NULL;current_book=current_book->next){
		if(strcmp(current_book->category,category)==0){
			printf("%-25s %-25s %-25s %-5d %-5d \n",current_book->name,current_book->author,current_book->category,current_book->year,current_book->area);
			coun=1;
			}
	}
		if(coun==0){
		puts("Category is not exist \n");
		}
}
void examine_year(bk *a_book){
	int count=0,yearnum=0,yearnum2=0;
	bk *current_book;
	puts("Yearnum: ");
	scanf("%d",&yearnum);
	puts("Yearnum2: ");
	scanf("%d",&yearnum2);
	for(current_book=a_book;current_book!=NULL;current_book=current_book->next){
		if(yearnum<=current_book->year && yearnum2 >= current_book->year){
			printf("%-25s %-25s %-25s %-5d %-5d \n",current_book->name,current_book->author,current_book->category,current_book->year,current_book->area);
			count=1;
			}
	}
		if(count==0){
		puts("Yearnum is not exist. \n");
		}
}
int main()
{  	int c,v=0,res,books=0,betax,betay;
	ar *a_area,*current_area,*it_area,*tmp_area;
	bk *a_book,*current_book,*it_book,*tmp_book;
	bk *a_all_of_books;
	FILE *file_of_books,*file_of_areas;
	current_area=(ar *)malloc(sizeof(ar));
	current_book=(bk *)malloc(sizeof(bk));
	file_of_areas=fopen("Areas.txt","r");
	current_area=(ar*)malloc(sizeof(ar));
	while(!feof(file_of_areas))
	{	current_area->next=(ar *)malloc(sizeof(ar));
		current_area=current_area->next;
		fscanf(file_of_areas,"%d %s",&(current_area->id),current_area->title);
		current_area->book=NULL;
		if(v==0){
			a_area=current_area;
			a_area->book=NULL;
		}
		v=1;
		current_area->next=NULL;
		};
		current_area==NULL;
		fclose(file_of_areas);
	for(current_area=a_area;current_area!=NULL;current_area=current_area->next){
	}
	file_of_books=fopen("Books.txt","r");
	fscanf(file_of_books, "%*[^\n]\n", NULL);
	current_area=a_area;
	while(!feof(file_of_books)){
		current_book=(bk*)malloc(sizeof(bk));
		fscanf(file_of_books,"%s %s %s %d %d",current_book->name,current_book->author,current_book->category,&(current_book->year),&(current_book->area));
		current_book->next=NULL;
		add_book(a_area,current_book);
		books++;
	}
	for(it_area=a_area;it_area!=NULL;it_area=it_area->next){
		for(it_book=it_area->book;it_book!=NULL;it_book=it_book->next){
		}
		}
	a_all_of_books=schedule_of_all_books(file_of_books);
	for(current_book=a_all_of_books;current_book!=NULL;current_book=current_book->next){
	}
    int i,j,k,a;
	for(i=0;i<20;i++){
		printf("*");
	}
	printf("Menu");
	for(j=0;j<20;j++){
		printf("*");
}
while(1){
printf("\n1. Query all books in alphabetical order");
printf("\n2. Add an Area");
printf("\n3. Add a book to the book list of an area");
printf("\n4. Show detailed information about a particular area");
printf("\n5. Remove an Area");
printf("\n6. Query the books which were written by a particular author");
printf("\n7. Query the books according to a particular category");
printf("\n8. Query the books according to a particular publication year");
printf("\n0. Exit\n");
for(k=0;k<44;k++){
	printf("*");
}
printf("\nSelect the number:");
scanf("%d",&a);
if(a==0){
printf("Good Bye");
break;
}
if(a==1){
alphabetic_sort(a_all_of_books);
}
if(a==2){
ad_area(a_area);
}
if(a==3){
join_a_book_to_choose_an_area(a_area,a_all_of_books);
int d;
puts("If You should enter 1,Look alphabetic sort for looking add book=");
scanf("%d",&d);
if(d==1){
alphabetic_sort(a_all_of_books);
}
else{
	puts("Wrong number.");
}
}
if(a==4){
knowladge_of_area(a_area);
}
if(a==5){
del(a_area);
}
if(a==6){
examine_author(a_all_of_books);
}
if(a==7){
examine_category(a_all_of_books);
}
if(a==8){
examine_year(a_all_of_books);
}
}
}

