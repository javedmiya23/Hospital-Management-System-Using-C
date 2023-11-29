#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Adress {
char street[50];
char city[50];
char pincode[20];
};

struct basic_details {
char a_number[20];
char f_name[100];
char l_name[100];
int age;
char gender[20];
char number[20];
struct Adress adress;
char disease[50];
char date[20];
int weight;
};

void appointment_doc(struct basic_details s,char s1[100]) {
printf("\n");
printf("___ THESE ARE THE DOCTORS AVAILABLE FOR THE GIVEN DATE ___");
printf("\t[DATE : %s]\n",s.date);
printf("\n");
printf("\t1. Dr.CHETAN [Pediatrician (children Doctor)]\n");
printf("\t   TIME : (11:30 A.M TO 12:30 P.M)\n");
printf("\n");
printf("\t2. Dr.GEERISH KUMAR [General Practitioner (GP)]\n");
printf("\t   TIME : (10:30 A.M TO 12:30 P.M)\n");
printf("\n");
printf("\t3. Dr.GANESH H [Obstetrician-Gynecologist(OB-GYN)]\n");
printf("\t   TIME : (10:30 A.M TO 11:30 A.M)\n");
printf("\n");
printf("\t4. Dr.SANKETH H L [Dermatologist]\n");
printf("\t   TIME : (9:30 A.M TO 1:30 P.M)\n");
printf("\n");
printf("\t5. Dr.DEV BALIYAN [Opthalmologist]\n");
printf("\t   TIME : (2:30 P.M TO 4:30 P.M)\n");
printf("\n");
printf("\t6. Dr.HARSH KUMAR [ENT Specialist]\n");
printf("\t   TIME : (1:30 P.M TO 3:00 P.M)\n");
printf("\n");
printf("\t7. Dr.HARSHITH [Cardiologist]\n");
printf("\t   TIME : (5:30 P.M TO 7:30 P.M)\n");
printf("\n");
printf("\t8. Dr.JAVED MIYA [Neurologist]\n");
printf("\t   TIME : (9:30 A.M TO 11:30 A.M)\n");
printf("\n");
printf("________________________________________");
printf("\n\n");
int doc_choice;
printf("\tENTER YOUR DOCTOR SERIAL NUMBER : ");
scanf("%d",&doc_choice);
printf("\n");

printf("\tYOUR APPOINTMENT HAS BEEN SUCCESSFULLY DONE\n");
printf("\n");
printf("\tDOCTOR DETAILS :\n");
printf("\n");
switch(doc_choice) {
case 1:
    printf("\tNAME : Dr.CHETAN [Pediatrician (children Doctor)]\n");
    printf("\tTIME : (11:30 A.M TO 12:30 P.M)\n");
    break;
case 2:
     printf("\tNAME :  Dr.GEERISH KUMAR [General Practitioner (GP)]\n");
     printf("\tTIME : (10:30 A.M TO 11:30 A.M))\n");
     break;
case 3:
     printf("\tNAME : Dr.GANESH H [Obstetrician-Gynecologist(OB-GYN)]\n");
     printf("\tTIME : (10:30 A.M TO 11:30 A.M)\n");
     break;
case 4:
     printf("\tNAME : Dr.SANKETH H L [Dermatologist]\n");
     printf("\tTIME : (9:30 A.M TO 1:30 P.M)\n");
     break;
case 5:
     printf("\tNAME : Dr.DEV BALIYAN [Opthalmologist]\n");
     printf("\tTIME : (2:30 P.M TO 4:30 P.M)\n");
     break;
case 6:
     printf("\tNAME : Dr.HARSH KUMAR [ENT Specialist]\n");
     printf("\tTIME : (1:30 P.M TO 3:00 P.M)\n");
     break;
case 7:
     printf("\tNAME : Dr.HARSHITH [Cardiologist]\n");
     printf("\tTIME : (5:30 P.M TO 7:30 P.M)\n");
     break;
case 8:
     printf("\tNAME : Dr.JAVED MIYA [Neurologist]\n");
     printf("\tTIME : (9:30 A.M TO 11:30 A.M)\n");
     break;
default :
    printf("\tINVALID CHOICE MADE\n");
    break;
}
printf("\n");
int press;
printf("\tPREES 1 TO DOWNLOAD YOUR APPOINTMENT LETTER : ");
scanf("%d",&press);
printf("\n\n\n");
if(press==1){
    printf("_________________\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|______ B N M HOSPITAL _____|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|Date : %s\t\tplace :Bengaluru|\n",s.date);
    printf("|_________________|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|Personal information :\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|Aadhar number : %s\t\t       |\n",s1);
    printf("|Name : %s %s\t\t\t\t|\n",s.f_name,s.l_name);
    printf("|Weight : %d\t\t\t\t\t|\n",s.weight);
    printf("|Gender : %s\t\t\t\t        |\n",s.gender);
    printf("|Phone Number : %s\t\t\t|\n",s.number);
    printf("|Adress : %s  %s  %s\t|\n",s.adress.street,s.adress.city,s.adress.pincode);
    printf("|Disease : %s\t\t\t|\n",s.disease);
    printf("|\t\t\t\t\t\t|\n");
    printf("|_________________|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("| DOCTOR DETAILS :\t\t\t\t|\n");
    printf("| NAME : ");
    switch(doc_choice) {
case 1:
    printf("Dr.CHETAN [Pediatrician (children Doctor)]|\n");
    printf("| ALLOTED TIME : IN BETWEEN (11:30 A.M TO 12:30 P.M)|\n");
    break;
case 2:
     printf("Dr.GEERISH KUMAR [General Practitioner (GP)]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (10:30 A.M TO 11:30 A.M)|\n");
     break;
case 3:
     printf("Dr.GANESH H [Obstetrician-Gynecologist(OB-GYN)]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (10:30 A.M TO 11:30 A.M)|\n");
     break;
case 4:
     printf("Dr.SANKETH H L [Dermatologist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (9:30 A.M TO 1:30 P.M)|\n");
     break;
case 5:
     printf("Dr.DEV BALIYAN [Opthalmologist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (2:30 P.M TO 4:30 P.M)|\n");
     break;
case 6:
     printf("Dr.HARSH KUMAR [ENT Specialist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (1:30 P.M TO 3:00 P.M)|\n");
     break;
case 7:
     printf("Dr.HARSHITH [Cardiologist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (5:30 P.M TO 7:30 P.M)|\n");
     break;
case 8:
     printf("Dr.JAVED MIYA [Neurologist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (9:30 A.M TO 11:30 A.M)|\n");
     break;
default :
    printf("\tINVALID CHOICE MADE\n");
    break;
}
printf("|\t\t\t\t\t\t|\n");
printf("|_________________|\n");
printf("|\t\t\t\t\t\t|\n");
printf("| Remarks :\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|_________________|\n\n");
printf("     KINDLY TAKE YOUR LETTER PRINT THANK YOU !\n");
printf("\n\n");
} else {
printf("\tINVALID NUMBER PRESSED\n");
}
printf("\n");
main();
}


void appointment_details() {
printf("\n\n\n");
printf("___ ENTER YOUR PERSONAL DETAILS ___\n");
printf("\n");
struct basic_details s[1];

printf("\tTODAY'S DATE : ");
scanf("%s",s[1].date);

printf("\n");

printf("\tENTER YOUR AADHAR NUMBER WITHOUT SPACE : ");
scanf("%s",s[1].a_number);

printf("\t1.FIRST NAME : ");
scanf("%s",s[1].f_name);

printf("\t2.LAST NAME : ");
scanf("%s",s[1].l_name);

printf("\t3.AGE : ");
scanf("%d",&s[1].age);
getchar();

printf("\t4.WEIGHT : ");
scanf("%d",&s[1].weight);
getchar();

printf("\t5.GENDER : ");
scanf("%s",s[1].gender);
getchar();

printf("\t5.PHONE NUMBER : ");
scanf("%s",s[1].number);

printf("\n");
printf("___ ADRESS ___\n");
printf("\n");

printf("\tSTREET : ");
scanf("%s",s[1].adress.street);

printf("\tCITY : ");
scanf("%s",s[1].adress.city);

printf("\tPINCODE : ");
scanf("%s",s[1].adress.pincode);
printf("\n");
printf("___ DISEASE ___\n");
printf("\n");

printf("\tDISEASE : ");
scanf("%s",s[1].disease);
printf("\n");
printf("\n");

char copy_number[50];
strcpy(copy_number,s[1].a_number);
char filename[20];
printf("\tPLEAS ENTER YOUR AADHAR NUMBER TO CTREATE YOUR FILE [NOTE : 12xxx87.txt] : ");
scanf("%s",filename);
FILE *file;
file = fopen(filename,"w+");
if(file==NULL){
    printf("\tSORRY COULD NOT CREATE YOUR FILE\n");
    main();
}
fprintf(file,"Date : %s\n",s[1].date);
fprintf(file,"Aadhaar number : %s\n",copy_number);
fprintf(file,"Name : %s %s\n",s[1].f_name,s[1].l_name);
fprintf(file,"Age : %d\n", s[1].age);
fprintf(file,"Weight : %d\n",s[1].weight);
fprintf(file,"Gender : %s\n",s[1].gender);
fprintf(file,"Phone Number : %s\n",s[1].number);
fprintf(file,"Adress : %s  %s  %s\n",s[1].adress.street,s[1].adress.city,s[1].adress.pincode);
fprintf(file,"Disease : %s\n",s[1].disease);
fclose(file);

appointment_doc(s[1],copy_number);


}


void patient_details() {

FILE *p_d_file;
char s2[20];
char line[50],line1[50];
printf("\t DEAR, USER ENTER YOU AADHAR NUMBER IN THIS FORMAT : [12XXXXXX87.txt]\n");
printf("\t ENTER YOUR AADHAR NUMBER WITHOUT SPACE : ");
scanf("%s",s2);
printf("\n");
p_d_file = fopen(s2,"r");
if(p_d_file==NULL) {
    printf("\tPATIENT DOE'S NOT EXIST PLEASE RESISTER FIRST !\n");
    main();
} else {

    printf("\t DETAILS OF A PERSON OF GIVEN AADHAR NUMBER\n");
    printf("\n");
while(fgets(line,sizeof(line),p_d_file)) {
    printf("\t");
    puts(line);
}
fclose(p_d_file);
printf("\n\n");
int a_choice;
printf("\tIF THE ABOVE USER NEED APPOINTMENT PRESS 1 ELSE PRESS ANY KEY : ");
scanf("%d",&a_choice);
printf("\n");
if(a_choice==1){

char date1[20];
printf("\n");
printf("\t ENTER TODAY'S DATE : ");
scanf("%s",date1);
printf("___ THESE ARE THE DOCTORS AVAILABLE FOR THE GIVEN DATE ___ [DATE : %s]\n",date1);
printf("\n");
printf("\t1. Dr.CHETAN [Pediatrician (children Doctor)]\n");
printf("\t   TIME : (11:30 A.M TO 12:30 P.M)\n");
printf("\n");
printf("\t2. Dr.GEERISH KUMAR [General Practitioner (GP)]\n");
printf("\t   TIME : (10:30 A.M TO 12:30 P.M)\n");
printf("\n");
printf("\t3. Dr.GANESH H [Obstetrician-Gynecologist(OB-GYN)]\n");
printf("\t   TIME : (10:30 A.M TO 11:30 A.M)\n");
printf("\n");
printf("\t4. Dr.SANKETH H L [Dermatologist]\n");
printf("\t   TIME : (9:30 A.M TO 1:30 P.M)\n");
printf("\n");
printf("\t5. Dr.DEV BALIYAN [Opthalmologist]\n");
printf("\t   TIME : (2:30 P.M TO 4:30 P.M)\n");
printf("\n");
printf("\t6. Dr.HARSH KUMAR [ENT Specialist]\n");
printf("\t   TIME : (1:30 P.M TO 3:00 P.M)\n");
printf("\n");
printf("\t7. Dr.HARSHITH [Cardiologist]\n");
printf("\t   TIME : (5:30 P.M TO 7:30 P.M)\n");
printf("\n");
printf("\t8. Dr.JAVED MIYA [Neurologist]\n");
printf("\t   TIME : (9:30 A.M TO 11:30 A.M)\n");
printf("\n");
printf("________________________________________");
printf("\n\n");
int doc_choice;
printf("\tENTER YOUR DOCTOR SERIAL NUMBER : ");
scanf("%d",&doc_choice);
printf("\n");

printf("\tYOUR APPOINTMENT HAS BEEN SUCCESSFULLY DONE\n");
printf("\n");
printf("\tDOCTOR DETAILS :\n");
printf("\n");
switch(doc_choice) {
case 1:
    printf("\tNAME : Dr.CHETAN [Pediatrician (children Doctor)]\n");
    printf("\tTIME : (11:30 A.M TO 12:30 P.M)\n");
    break;
case 2:
     printf("\tNAME :  Dr.GEERISH KUMAR [General Practitioner (GP)]\n");
     printf("\tTIME : (10:30 A.M TO 11:30 A.M))\n");
     break;
case 3:
     printf("\tNAME : Dr.GANESH H [Obstetrician-Gynecologist(OB-GYN)]\n");
     printf("\tTIME : (10:30 A.M TO 11:30 A.M)\n");
     break;
case 4:
     printf("\tNAME : Dr.SANKETH H L [Dermatologist]\n");
     printf("\tTIME : (9:30 A.M TO 1:30 P.M)\n");
     break;
case 5:
     printf("\tNAME : Dr.DEV BALIYAN [Opthalmologist]\n");
     printf("\tTIME : (2:30 P.M TO 4:30 P.M)\n");
     break;
case 6:
     printf("\tNAME : Dr.HARSH KUMAR [ENT Specialist]\n");
     printf("\tTIME : (1:30 P.M TO 3:00 P.M)\n");
     break;
case 7:
     printf("\tNAME : Dr.HARSHITH [Cardiologist]\n");
     printf("\tTIME : (5:30 P.M TO 7:30 P.M)\n");
     break;
case 8:
     printf("\tNAME : Dr.JAVED MIYA [Neurologist]\n");
     printf("\tTIME : (9:30 A.M TO 11:30 A.M)\n");
     break;
default :
    printf("\tINVALID CHOICE MADE\n");
    break;
}
printf("\n");
int press;
printf("\tPREES 1 TO DOWNLOAD YOUR APPOINTMENT LETTER : ");
scanf("%d",&press);
printf("\n\n\n");
if(press==1){
    printf("_________________\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|______ B N M HOSPITAL _____|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|Date : %s\t\tplace :Bengaluru|\n",date1);
    printf("|_________________|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|Personal information :\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t|\n");
    p_d_file = fopen(s2,"r");
    while(fgets(line1,sizeof(line1),p_d_file)) {
    puts(line1);
}
    fclose(p_d_file);
     printf("|_________________|\n");
     printf("|\t\t\t\t\t\t|\n");
    printf("| DOCTOR DETAILS :\t\t\t\t|\n");
    printf("| NAME : ");
    switch(doc_choice) {
case 1:
    printf("Dr.CHETAN [Pediatrician (children Doctor)]|\n");
    printf("| ALLOTED TIME : IN BETWEEN (11:30 A.M TO 12:30 P.M)|\n");
    break;
case 2:
     printf("Dr.GEERISH KUMAR [General Practitioner (GP)]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (10:30 A.M TO 11:30 A.M)|\n");
     break;
case 3:
     printf("Dr.GANESH H [Obstetrician-Gynecologist(OB-GYN)]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (10:30 A.M TO 11:30 A.M)|\n");
     break;
case 4:
     printf("Dr.SANKETH H L [Dermatologist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (9:30 A.M TO 1:30 P.M)|\n");
     break;
case 5:
     printf("Dr.DEV BALIYAN [Opthalmologist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (2:30 P.M TO 4:30 P.M)|\n");
     break;
case 6:
     printf("Dr.HARSH KUMAR [ENT Specialist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (1:30 P.M TO 3:00 P.M)|\n");
     break;
case 7:
     printf("Dr.HARSHITH [Cardiologist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (5:30 P.M TO 7:30 P.M)|\n");
     break;
case 8:
     printf("Dr.JAVED MIYA [Neurologist]|\n");
     printf("| ALLOTED TIME : IN BETWEEN (9:30 A.M TO 11:30 A.M)|\n");
     break;
default :
    printf("\tINVALID CHOICE MADE\n");
    break;
}
printf("|\t\t\t\t\t\t|\n");
printf("|_________________|\n");
printf("|\t\t\t\t\t\t|\n");
printf("| Remarks :\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("|_________________|\n\n");
printf("     KINDLY TAKE YOUR LETTER PRINT THANK YOU !\n");
printf("\n\n");
main();
} else {
printf("\tINVALID NUMBER PRESSED\n");
main();
}
main();
} else {
    printf("\tINVALID NUMBER ENTERED\n");
    main();
}
}
printf("\n");

}

void fee_recipt() {
printf("\n");
char docn[20];
int pass=123456;
printf("\tNOTE : THIS CHOICE IS FOR DOCTORS ONLY\n");
printf("\n");
printf("\tENTER USER NAME : ");
getchar();
gets(docn);
printf("\n");
printf("\tPASSWORD : ");
scanf("%d",&pass);
printf("\n\n");
if(pass==123456) {
        char da_te[20];
        int doc_choice;
    printf("\t WELCOME DOCTOR \t\n");
    printf("\n");
    printf("\t ENTER DATE : ");
    scanf("%s",da_te);
    printf("\n");
    printf("\tPLEASE ENTER YOUR DOCTOR  NUMBER : ");
    scanf("%d",&doc_choice);
    if(doc_choice<=8){
    char a_num[20];
    double r_c,m_p,d_f,me,n_c,h_s,f_a,a_s,t_a;
    printf("\n");
    printf("\t PLEASE ENTER PATIENT AADHAR NUMBER : ");
    scanf("%s",a_num);
    printf("\n");
    printf("\tPLEASE ENTER THE PITIENT CHARGES BELOW\n");
    printf("\n");
    printf("\t ROOM CHARGE : ");
    scanf("%lf",&r_c);
    printf("\n");
    printf("\t MEDICAL PROCEDURES CHARGE : ");
    scanf("%lf",&m_p);
    printf("\n");
    printf("\t DOCTOR'S FEES : ");
    scanf("%lf",&d_f);
    printf("\n");
    printf("\t MEDICATIONS CHARGES : ");
    scanf("%lf",&me);
    printf("\n");
    printf("\t NURSING CARE : ");
    scanf("%lf",&n_c);
    printf("\n");
    printf("\t HOPITAL SERVICES : ");
    scanf("%lf",&h_s);
    printf("\n");
    printf("\t FOOD AND ACCOMMODATION : ");
    scanf("%lf",&f_a);
    printf("\n");
    printf("\t ADDITIONAL SERVISES : ");
    scanf("%lf",&a_s);
    printf("\n");
    t_a=r_c+m_p+d_f+me+n_c+h_s+f_a+a_s;
    printf("\t PROCESSING WAIT .............\n");
    printf("_________________\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|______ B N M HOSPITAL _____|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|Date : %s\t\tplace :Bengaluru|\n",da_te);
    printf("|_________________|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|Petient  information :\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("|Aadhar number : %s\t\t        |\n",a_num);
    printf("|\t\t\t\t\t\t|\n");
    printf("|_________________|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("| DOCTOR DETAILS :\t\t\t\t|\n");
    printf("|\t\t\t\t\t\t|\n");
    printf("| NAME : ");
    switch(doc_choice) {
case 1:
    printf("Dr.CHETAN [Pediatrician (children Doctor)]|\n");
    break;
case 2:
     printf("Dr.GEERISH KUMAR [General Practitioner (GP)]|\n");
     break;
case 3:
     printf("Dr.GANESH H [Obstetrician-Gynecologist(OB-GYN)]|\n");
     break;
case 4:
     printf("Dr.SANKETH H L [Dermatologist]|\n");
     break;
case 5:
     printf("Dr.DEV BALIYAN [Opthalmologist]|\n");
     break;
case 6:
     printf("Dr.HARSH KUMAR [ENT Specialist]|\n");
     break;
case 7:
     printf("Dr.HARSHITH [Cardiologist]|\n");
     break;
case 8:
     printf("Dr.JAVED MIYA [Neurologist]|\n");
     break;
default :
    printf("\tINVALID CHOICE MADE\n");
    break;
}
printf("|\t\t\t\t\t\t|\n");
printf("|_________________|\n");
printf("|\t\t\t\t\t\t|\n");
printf("| Amount Details :\t\t\t\t|\n");
printf("|\t\t\t\t\t\t|\n");
printf("| Room Charge : %0.2lf\t\t\t|\n",r_c);
printf("| Medical Procedures Charge : %0.2lf\t\t|\n",m_p);
printf("| Nurcing Care : %0.2lf\t\t\t|\n",n_c);
printf("| Doctor's Fees : %0.2lf\t\t\t|\n",d_f);
printf("| Medications : %0.2lf\t\t\t|\n",me);
printf("| Hospital Services : %0.2lf\t\t|\n",h_s);
printf("| Food And Accomodation : %0.2lf\t\t|\n",f_a);
printf("| Additional Services : %0.2lf\t\t|\n",a_s);
printf("|\t\t\t\t\t\t|\n");
printf("|_________________|\n");
printf("|\t\t\t\t\t\t|\n");
printf("| Total Amount : %0.2lf\t\t\t|\n",t_a);
printf("|\t\t\t\t\t\t|\n");
printf("|_________________|\n\n");
printf("     KINDLY TAKE YOUR FEE RECIPT PRINT THANK YOU !\n");
printf("\n\n");
main();
} else {
    main();
}
}else {
printf("\t\t INVALID PASSWORD ENTERED\n");
main();
}
}


void main() {
printf("___ WELCOME TO HOSPITAL ___\n");
printf("\n");
printf("\t1.TAKE A APPOINTMENT\n");
printf("\t2.KNOW PATIENT DETAILS \ EXISTING USER NEED APPOINTMENT\n");
printf("\t3.FEE RECEIPT\n");
printf("\t4.EXIT TO MENU\n");
printf("\t5.EXIT\n");
printf("\n");
printf("_____________");
printf("\n");
int choice;
printf("\n");
printf("\tENTER YOUR CHOISE : ");
scanf("%d",&choice);
printf("_____________");
printf("\n");

if(choice==1){

appointment_details();

} else if(choice==2) {

patient_details();

} else if(choice==3) {

fee_recipt();

} else if(choice==5) {

exit(0);

} else if(choice==4) {

main();

}


 else {

printf("INVALID CHOICE MADE\n");

}
}