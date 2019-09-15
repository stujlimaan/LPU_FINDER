#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<process.h>
struct lpu{
char section[50],mentor[50],hod[50],courseCoordinator[50],plmentor[50],stucouncellor[50],ecellcordntr[50],plcordinator[50];
}l[5];

int main()
{
    
    char regno[15],s[20],ch,sec[5][5];
    int choice,c,c1,i,j,k,m;
   
    printf("\t\t\tWElCOME TO LPU FinDER\n\n\n");
    printf("\nEnter Values OF Section,Section mentor, hod,course coordinator ,etc : \n");
    for(i=0;i<5;i++)
    {
        if(i==0){
        printf("\nEnter %dst section : ",i+1);
        gets(l[i].section);
        printf("\nEnter %dst section mentor : ",i+1);
        gets(l[i].mentor);
        printf("\nEnter %dst section HOD : ",i+1);
        gets(l[i].hod);
        printf("\nEnter %dst section Course Coordinator : ",i+1);
        gets(l[i].courseCoordinator);
        printf("\nEnter %dst section placement mentor : ",i+1);
        gets(l[i].plmentor);
        printf("\nEnter %dst section student councellor : ",i+1);
        gets(l[i].stucouncellor);
        printf("\nEnter %dst section Ecell Coordinator : ",i+1);
        gets(l[i].ecellcordntr);
        printf("\nEnter %dst section Placement Coordinator : ",i+1);
        gets(l[i].plcordinator);
        }
        else
        if(i==1){
            printf("\nEnter %dnd section : ",i+1);
        gets(l[i].section);
        printf("\nEnter %dnd section mentor : ",i+1);
        gets(l[i].mentor);
        printf("\nEnter %dnd section HOD : ",i+1);
        gets(l[i].hod);
        printf("\nEnter %dnd section Course Coordinator : ",i+1);
        gets(l[i].courseCoordinator);
        printf("\nEnter %dnd section placement mentor : ",i+1);
        gets(l[i].plmentor);
        printf("\nEnter %dnd section student councellor : ",i+1);
        gets(l[i].stucouncellor);
        printf("\nEnter %dnd section Ecell Coordinator : ",i+1);
        gets(l[i].ecellcordntr);
        printf("\nEnter %dnd section Placement Coordinator : ",i+1);
        gets(l[i].plcordinator);
        }
        else
        if(i==2){
            printf("\nEnter %drd section : ",i+1);
        gets(l[i].section);
        printf("\nEnter %drd section mentor : ",i+1);
        gets(l[i].mentor);
        printf("\nEnter %drd section HOD : ",i+1);
        gets(l[i].hod);
        printf("\nEnter %drd section Course Coordinator : ",i+1);
        gets(l[i].courseCoordinator);
        printf("\nEnter %drd section placement mentor : ",i+1);
        gets(l[i].plmentor);
        printf("\nEnter %drd section student councellor : ",i+1);
        gets(l[i].stucouncellor);
        printf("\nEnter %drd section Ecell Coordinator : ",i+1);
        gets(l[i].ecellcordntr);
        printf("\nEnter %drd section Placement Coordinator : ",i+1);
        gets(l[i].plcordinator);
        }
        else
        if(i==3||i==4){
            printf("\nEnter %dth section : ",i+1);
        gets(l[i].section);
        printf("\nEnter %dth section mentor : ",i+1);
        gets(l[i].mentor);
        printf("\nEnter %dth section HOD : ",i+1);
        gets(l[i].hod);
        printf("\nEnter %dth section Course Coordinator : ",i+1);
        gets(l[i].courseCoordinator);
        printf("\nEnter %dth section placement mentor : ",i+1);
        gets(l[i].plmentor);
        printf("\nEnter %dth section student councellor : ",i+1);
        gets(l[i].stucouncellor);
        printf("\nEnter %dth section Ecell Coordinator : ",i+1);
        gets(l[i].ecellcordntr);
        printf("\nEnter %dth section Placement Coordinator : ",i+1);
        gets(l[i].plcordinator);
        }
    }
    system("cls");

    printf("\n\nChoose what you want to know :::\n\n(1): Section Mentor \n(2): HOD \n(3): Course Coordinator \n(4): Placement Mentor \n(5): Student Councellor\n(6): Ecell Coordinator\n(7): Placement Coordinator\n(8): If you Want to know all concerned faculties\n(9): Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        system("cls");
        printf("\n(1): Update Value\n(2): Know your section mentor by entering section\n(3): Exit\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nTo update value choose your section :\n(1): %s\n(2): %s\n(3): %s\n(4): %s\n(5): %s\n ",l[0].section,l[1].section,l[2].section,l[3].section,l[4].section);
            scanf("%d",&c1);
            c1--;
            m=-1;
            if(c1<5)
                m=1;
            switch(m){
                case 1:
                    printf("\n Enter new section Mentor : ");
                    scanf("%s",l[c1].mentor);
                  
                    break;
                default:
                    printf("\nwrong input\n");
            }


            break;
        case 2:
            printf("\nEnter your Section : ");
            scanf("%s",s);
            for(i=0;i<5;i++)
            {
                if(strcmp(s,l[i].section)==0){
                        m=1;
                        break;
                }
            }
            if(m=1){
                    printf("\n(1): Section mentor : ");
            puts(l[i].mentor);
     
            }
            else{
                printf("\nWRong Input");
            }
            break;
        case 3:
        exit(1);
        default:
            printf("Wrong input");
         }
        break;
        case 2:
        system("cls");
        printf("\n(1): Update Value\n(2): Know your HOD by entering section\n(3): Exit\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nTo update value choose your section :\n(1): %s\n(2): %s\n(3): %s\n(4): %s\n(5): %s\n ",l[0].section,l[1].section,l[2].section,l[3].section,l[4].section);
            scanf("%d",&c1);
            c1--;
            m=-1;
            if(c1<5)
                m=1;
            switch(m){
                case 1:
                    printf("\n Enter new HOD : ");
                    scanf("%s",l[c1].hod);
                    
                    break;
                default:
                    printf("\nwrong input\n");
            }
            break;
        case 2:
            printf("\nEnter your Section : ");
            scanf("%s",s);
            for(i=0;i<5;i++)
            {
                if(strcmp(s,l[i].section)==0){
                        m=1;
                        break;
                }
            }
            if(m=1){
                    printf("\n(1): HOD : ");
            puts(l[i].hod);
            }
            else{
                printf("\nWRong Input");
            }
            break;
        case 3:
        exit(1);
        default:
            printf("Wrong input");
         }
        break;
    case 3:
        system("cls");
        printf("\n(1): Update Value\n(2): Know your Course Coordinator by entering section\n(3): Exit\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nTo update value choose your section :\n(1): %s\n(2): %s\n(3): %s\n(4): %s\n(5): %s\n ",l[0].section,l[1].section,l[2].section,l[3].section,l[4].section);
            scanf("%d",&c1);
            c1--;
            m=-1;
            if(c1<5)
                m=1;
            switch(m){
                case 1:
                    printf("\n Enter new Course Coordinator : ");
                    scanf("%s",l[c1].courseCoordinator);
                    
                    break;
                default:
                    printf("\nwrong input\n");
            }
            break;
        case 2:
            printf("\nEnter your Section : ");
            scanf("%s",s);
            for(i=0;i<5;i++)
            {
                if(strcmp(s,l[i].section)==0){
                        m=1;
                        break;
                }
            }
            if(m=1){
                    printf("\n(1): Course Coordinator : ");
            puts(l[i].courseCoordinator);
            }
            else{
                printf("\nWRong Input");
            }
            break;
        case 3:
        exit(1);
        default:
            printf("Wrong input");
         }
        break;
    case 4:
        system("cls");
        printf("\n(1): Update Value\n(2): Know your Placement Mentor by entering section\n(3): Exit\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nTo update value choose your section :\n(1): %s\n(2): %s\n(3): %s\n(4): %s\n(5): %s\n ",l[0].section,l[1].section,l[2].section,l[3].section,l[4].section);
            scanf("%d",&c1);
            c1--;
            m=-1;
            if(c1<5)
                m=1;
            switch(m){
                case 1:
                    printf("\n Enter new Placement Mentor : ");
                    scanf("%s",l[c1].plmentor);
                   
                    break;
                default:
                    printf("\nwrong input\n");
            }
            break;
        case 2:
            printf("\nEnter your Section : ");
            scanf("%s",s);
            for(i=0;i<5;i++)
            {
                if(strcmp(s,l[i].section)==0){
                        m=1;
                        break;
                }
            }
            if(m=1){
                    printf("\n(1): Placement Mentor : ");
            puts(l[i].plmentor);
            }
            else{
                printf("\nWRong Input");
            }
            break;
        case 3:
        exit(1);
        default:
            printf("Wrong input");
         }
        break;
    case 5:
        system("cls");
        printf("\n(1): Update Value\n(2): Know your Student Councellor by entering section\n(3): Exit\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nTo update value choose your section :\n(1): %s\n(2): %s\n(3): %s\n(4): %s\n(5): %s\n ",l[0].section,l[1].section,l[2].section,l[3].section,l[4].section);
            scanf("%d",&c1);
            c1--;
            m=-1;
            if(c1<5)
                m=1;
            switch(m){
                case 1:
                    printf("\n Enter new Student Councellor : ");
                    scanf("%s",l[c1].stucouncellor);
                    
                    break;
                default:
                    printf("\nwrong input\n");
            }
            break;
        case 2:
            printf("\nEnter your Section : ");
            scanf("%s",s);
            for(i=0;i<5;i++)
            {
                if(strcmp(s,l[i].section)==0){
                        m=1;
                        break;
                }
            }
            if(m=1){
                    printf("\n(1): Student Councellor : ");
            puts(l[i].stucouncellor);
            }
            else{
                printf("\nWRong Input");
            }
            break;
        case 3:
        exit(1);
        default:
            printf("Wrong input");
         }
        break;
    case 6:
        system("cls");
        printf("\n(1): Update Value\n(2): Know your Ecell Coordinator by entering section\n(3): Exit\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nTo update value choose your section :\n(1): %s\n(2): %s\n(3): %s\n(4): %s\n(5): %s\n ",l[0].section,l[1].section,l[2].section,l[3].section,l[4].section);
            scanf("%d",&c1);
            c1--;
            m=-1;
            if(c1<5)
                m=1;
            switch(m){
                case 1:
                    printf("\n Enter new Ecell Coordinatror : ");
                    scanf("%s",l[c1].ecellcordntr);
                    
                    break;
                default:
                    printf("\nwrong input\n");
            }
            break;
        case 2:
            printf("\nEnter your Section : ");
            scanf("%s",s);
            for(i=0;i<5;i++)
            {
                if(strcmp(s,l[i].section)==0){
                        m=1;
                        break;
                }
            }
            if(m=1){
                    printf("\n(1): Ecell Coordinator : ");
            puts(l[i].ecellcordntr);
            }
            else{
                printf("\nWRong Input");
            }
            break;
        case 3:
        exit(1);
        default:
            printf("Wrong input");
         }
        break;
    case 7:
        system("cls");
        printf("\n(1): Update Value\n(2): Know your Placement Coordinator by entering section\n(3): Exit\n");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nTo update value choose your section :\n(1): %s\n(2): %s\n(3): %s\n(4): %s\n(5): %s\n ",l[0].section,l[1].section,l[2].section,l[3].section,l[4].section);
            scanf("%d",&c1);
            c1--;
            m=-1;
            if(c1<5)
                m=1;
            switch(m){
                case 1:
                    printf("\n Enter new Placement Coordinatror : ");
                    scanf("%s",l[c1].plcordinator);
                   
                    break;
                default:
                    printf("\nwrong input\n");
            }
            break;
        case 2:
            printf("\nEnter your Section : ");
            scanf("%s",s);
            for(i=0;i<5;i++)
            {
                if(strcmp(s,l[i].section)==0){
                        m=1;
                        break;
                }
            }
            if(m=1){
                    printf("\n(1): Placement Coordinator : ");
            puts(l[i].plcordinator);
            }
            else{
                printf("\nWRong Input");
            }
            break;
        case 3:
        exit(1);
        default:
            printf("Wrong input");
         }

        break;


    case 8:
            printf("\nEnter your Section : ");
            scanf("%s",s);
            for(i=0;i<5;i++)
            {
                if(strcmp(s,l[i].section)==0){
                        m=1;
                        break;
                }
            }
            if(m=1){
            printf("Your Section Concerned Faculties are : \n(1): Section mentor : ");
            puts(l[i].mentor);
            printf("\n(2): HOD : ");
            puts(l[i].hod);
            printf("\n(3): Course Co-Ordinator : ");
            puts(l[i].courseCoordinator);
            printf("\n(3): Placement Mentor : ");
            puts(l[i].plmentor);
            printf("\n(4): Student Councellor : ");
            puts(l[i].stucouncellor);
            printf("\n(5): Ecell Coordinator : ");
            puts(l[i].ecellcordntr);
            printf("\n(6): Placement Coordinator : ");
            puts(l[i].plcordinator);
            }
            else{
                printf("\nWRong Input");
            }
            break;
    case 9:
        exit(1);
    default:
        printf("\nWrong input \n");
    }

}
