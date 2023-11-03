#include<stdio.h>
#include<string.h>

void patient_details();
void consult();
void emergency();
void viewE();
void viewN();
void billing();
void ex_it();
void  blood_sugar();
void  cbc();
void ecg();
void ctscan();
void urino();
void ultrason();
void MRI();
 void viewpediat();
 void biopsy();
 void ultrasound();
 void ent();
void pharma();

char para,amp,cef,bec,mul,ran,cim,des,pai,citr;
float albumin,pH,ketone,glucose,bilirubin,nitrite;
float fasting_test,post_prandial_plasma_glucose,rbc,wbc,platelets,haemoglobin;
int ec,k;
char techq[50];
char dur_ct[10];
int i,n;
char condition_mri[10];
char condition_ctscan[10];
char organ_ct[15];
char organ_mri[15];
char name[50];
int patient_no;
int age;
int p_time;
char gender[2];
char address[100];
long long int phone_number;
char Email[30];
float bill,freq;
char y[4];
char date[30];
char doctor[50];
char pro[40];
int sym[2],time,num,cons_fee;
char x[4];
char y[4] ="sat";
char z[4] ="sun";
char cond_gen[10];
char test[20];
int total;
int l;
int med[10]={7,6,10,8,9,10,6,7,8,9};
int der[2]={156,200};
int ped[5]={10,15,415,13,12};
int gyn[5]={15,20,27,20,510};
int ort[5]={35,23,45,67,80};
int entd[5]={50,35,48,79,80};
int f,money=0;

int main()
{
printf("-----------------------------------------------------------------------------------------------------------\n");
printf("\t\t\t\t***VANDANA MULTI SPECIALITY HOSPITAL****\n");
printf("-----------------------------------------------------------------------------------------------------------\n\n");
printf("\nenter date[dd/mm/yyyy]");
scanf("%s",date);
printf("\n");
printf("enter 1 for an emergency case // 2 for a normal case:");
scanf("%d",&num);

if( num ==1)
{
 emergency();
}

 else
 {
 patient_details();
 }

 return 0;

 }
void patient_details(){
 printf("\n------**--------enter patient's details----------**------------\n\n");
 
 printf("patient_no:");
 scanf("%d",&patient_no);
 getchar();
 printf("Name(no spaces): ");
 fgets(name,sizeof(name),stdin);
 name[strcspn(name,"\n")]='\0';
 printf("Age:");
 scanf("%d",&age);
 getchar();
 printf("Gender: ");
 scanf("%s",gender);
 printf("phone number: ");
 scanf("%lld",&phone_number); 
 getchar();
 printf("Email: ");
 fgets(Email,sizeof(Email),stdin);
 printf("Address: ");
fgets(address,50,stdin);
printf("enter consultation fee:");
scanf("%d",&cons_fee);
printf("enter [yes] to consult doctor:");
scanf("%s",y);
if(strcmp(y,"yes")==0){
 printf("*patient details added succesfully*\nTHANKYOU :) :)\n");
 consult();
}

}

  void consult()
  {
//for children below 10 years//
    if (age <= 10) {
        //details of pediatrician//
        printf("\n\n*Consult the Pediatric*\n");
        printf("\nDetails of the pediatric:\n");
        printf("Name of the Doctor: Dr. Suresh Kumar Panuganti");
        printf("\nHOD of Neonatology and Pediatrics");
        printf("\nExperience: 23+ years");
        printf("\nRoom no: 309");
        printf("\nTime slots available:\n");
        printf("\nOn week days: 10:00 am to 14:00 pm and 16:00 pm to 20:00 pm");
        printf("\nOn Sat and Sun: 11:00 to 14:00 and 17:00 to 20:00\n\n");
        printf("\nEnter today's Day (first 3 letters, all lowercase letters): ");

        for (int i = 0; i < 3; i++)
         {
            scanf(" %c", &x[i]);
        }

        char a = strcmp(x, y);
        char b = strcmp(x, z);
        //Checking the availability of time slots//
        printf("\nEnter the present time (24 hr format enter 4 digits (hhmm)): ");
        scanf("%d", &time);
        printf("\nIn case of an Emergency:\n");
        printf("\nplease contact: 244-2324-244\n");
     
        if (a==0||b==0) 
        {
            if (time>=0000 &&time < 1100)
                printf("\nPlease wait for the morning slot\n\n");
            else if (1400 <= time && time <= 1700)
                printf("\nPlease wait for the evening slot\n\n");
            else if (time >= 2000)
                printf("\nSorry!! There are no appointments for today; we will arrange it tomorrow\n\n");
            else if ((time >= 1100 && time < 1400) || (time >= 1700 && time < 2000))
                printf("\nYou may get an appointment today\n\n");
        }
         else {
            if (time>=0000 &&time < 1000)
                printf("\nPlease wait for the morning slot\n\n");
            else if (1400 <= time && time <= 1600)
                printf("\nPlease wait for the evening slot\n\n");
            else if (time >= 2000)
                printf("\nSorry!! There are no appointments for today; we will arrange an appointment tomorrow\n\n");
            else if ((time >= 1000 && time < 1400) || (time >= 1400 && time < 2000))
                printf("\nYou may get an appointment today\n\n");
        }
            
                         printf("\ndoctor consulted:");
                         scanf("%s",doctor);
                         pharma();

    } 
    //for patients above 10 years//
    else {
        printf("\nPlease enter your symptoms (one Major):\n");
        printf("Fever=1\nBody pains=7\nCough & Cold=2\nDrowsiness and fatigue=8\n");
        printf("Throat & Ear=3\nGynecology related=9\nBones problem=4\nHeadache or migraine=10\n");
        printf("Skin related=5\nNausea=11\nStomach ache=6\nAny other cases=12\n");

        for (int j = 0; j < 1; j++) 
        {
            scanf("%d", &sym[j]);
        }
      
        int var = 0;
        //Guidence for the further procedure to be followed//
        for (int j = 0; j < 1; j++) {
            switch (sym[j]) {
                case 4:
                    printf("\n\nConsult Orthopedic Department-Block A\n");
                   
                   printf("enter time in 24hr format:");
                   scanf("%d",&p_time);
                  if(p_time>=600 && p_time<=1200){
                   printf("contact Dr.vaidehi,OPD-70\n\n");
                   printf("enter doctor consulted:");
                   scanf("%s",doctor);
                   MRI();
                  }
                 else if(p_time>1200 && p_time<=2200){
                  printf("contact Dr.manogna,OPD-80\n\n");
                   printf("enter doctor consulted:");
                   scanf("%s",doctor);
                   MRI();
                 }
                 else
                 {
                 printf("sorry no doctor available");
                 }
                 break;
                
                case 9:
                    printf("\n\nConsult Gynecology - (specially for pregnant ladies)Department-Block A\n");
                
                    
                   printf("enter time in 24hr format:");
                   scanf("%d",&p_time);
                  if(p_time>=600 && p_time<=1200){
                   printf("contact Dr.karunanidhi,OPD-60\n\n");
                   printf("enter doctor consulted:");
                   scanf("%s",doctor);
                   ultrasound();
                  }
                 else if(p_time>1200 && p_time<=2200){
                  printf("contact Dr.sirisha,OPD-30\n\n");
                   printf("enter doctor consulted:");
                   scanf("%s",doctor);
                   printf("\n");
                   ultrasound();
                    
                 }
                 else {
                    printf("sorry no doctors available");
                 }
                 break;
                case 3:
                    printf("\nConsult the ENT Specialist-Block B\n");
                    
                   printf("enter time in 24hr format:");
                   scanf("%d",&p_time);
                  if(p_time>=600 && p_time<=1200){
                   printf("contact Dr.Indrani,OPD-90\n\n");
                   printf("enter doctor consulted:");
                   scanf("%s",doctor);
                   ent();
                  }
                 else if(p_time>1200 && p_time<=2200){
                  printf("contact Dr.keshav,OPD-40\n\n");
                   printf("enter doctor consulted:");
                   scanf("%s",doctor);
                   ent();
                 }
                 else{
                 printf("sorry no doctor available");
                
                 }
                    break;
            
                case 5:
                    printf("\nConsult the Dermatology department-Block A\n");
                     int p_time;
                   printf("enter time in 24hr format:");
                   scanf("%d",&p_time);
                  if(p_time>=600 && p_time<=1200){
                   printf("contact Dr.Isha,OPD-20\n\n");
                   printf("enter doctor consulted:");
                   scanf("%s",doctor);
                   biopsy();
                  }
                 else if(p_time>1200 && p_time<=2200){
                  printf("contact Dr.keshav,OPD-10\n\n");
                   printf("enter doctor consulted:");
                   scanf("%s",doctor);
                   biopsy();
                 }
                 else{
                 printf("sorry no doctor available");
                 }
                 break;
                default:
                    var++;
            }
        }

        if (var != 0)
         {    
            printf("\n\nConsult the general physician for further laboratory examination reference");
              printf("\n------------------------------------");
            printf("\nDetails of the general physicians:");
            /* Doctor 1 */
            printf("\nName of the Doctor: Dr. B.S Gupta");
            printf("\nInternal Medicine, General Physician");
            printf("\nExperience: 24+ years");
            printf("\nTimings available: 6:00 am to 8:00 am every day");
            printf("\n Room.no:409");
            printf("------------------------------------");
            /* Doctor 2 */
            printf("\nName of the Doctor: Dr. S. Shanthi");
            printf("\nInternal Medicine, General Physician");
            printf("\nExperience: 20+ years");
            printf("\nTimings available: 8:00 am to 4:00 pm every day");
            printf("\n Room.no:408");
            printf("\n------------------------------------");
            /* Doctor 3 */
            printf("\nName of the Doctor: Dr. R. Raghavan");
            printf("\nInternal Medicine, General Physician");
            printf("\nExperience: 23+ years");
            printf("\nTimings available: 4:00 pm to 12:00 am every day");
            printf("\n Room.no:407");
            printf("------------------------------------\n");
            printf("\nEnter the present time (24 hr format enter 4 digits (hhmm)): ");
            scanf("%d", &time);


            if (time>=600 &&time < 800)
        {
                printf("\nconsult Dr. B.S Gupta");
                printf("\ndoctor consulted:");
                scanf("%s",doctor);
                
        }
            else if (time>=800 && time < 1600)
            {
                printf("\nconsult Dr.S.Shanthi");
                printf("\ndoctor consulted:");
                scanf("%s",doctor);
                
            }
            else if (time>=1600 && time<=2000)
            {
                printf("\nconsult Dr. R.Raghavan");
                printf("\ndoctor consulted:");
                scanf("%s",doctor);
                
                }
                else if(time>2000)
                {
                printf("\nDoctors will come soon please wait!!!");
                }
                else{

                   printf("no doctors are available") ;
                }

            
            {  
             printf("\n ~~~LAB TESTS RECOMMENDED BY DOCTOR~~~");
             printf("\n  BLOOD-SUGAR,ECG,CBC");
             blood_sugar();
            }

        }
    }
  }

void emergency()
{
int t;
int i;
int c;
char type[20];

printf("\nEmergency case\n\n");

printf("Enter case(1 for heart attacks,3 for accidents//serious problems,2 for gyanic problems):");
scanf("%d",&c);
switch(c){
case 1:
printf("list of cardiologists available every day\n\n");
printf("1 Dr.Radha krishna palle\n");
printf("ICU NO:3\n");
printf("available time slot 9:00AM to 12:30PM\n\n");
printf("2 Dr.Visnhu Bishnoy\n");
printf("ICU NO:4\n");
printf("available time slot:13:00PM to 16:30PM\n\n");
printf("3 Dr.sanjeev mehta\n");
printf("ICU NO:7\n");
printf("available time slot 16:30PM to 24:00AM\n\n");
printf("4 Dr.Raghunandan\n");
printf("ICU NO:9\n");
printf("available time slot 6:00AM to 9:00AM\n\n");

printf("enter time(!!24 hr format!!):");
scanf("%d",&t);

printf("doctor to be consulted:\n");
if(t>=900 && t<=1230)
printf("Dr.Radha krishna palle,ICU:3\n");

else if(t>=1300 && t<=1630)
printf("Dr.vishnubishnoy,ICU:4\n");
  
else if(t>1630 && t<=2400)
printf("Dr.sanjeevmehta,ICU:7\n");

else if(t>=0000 && t<=600)
printf("Dr.Raghunandan,ICU:9\n");

else
printf("SORRY NO DOCTORS AVAILABLE TO TREAT AT THIS TIME KINDLY SHIFT TO ANOTHER HOSPITAL");

break;
case 2:
printf("list of Gynacologists available every day\n\n");
printf("1 Dr.Bhanu niddana\n");
printf("ICU NO:8\n");
printf("available time slot 9:00AM to 12:30PM\n\n");
printf("2 Dr.Jahnavi chenda\n");
printf("ICU NO:6\n");
printf("available time slot:13:00PM to 16:30PM\n\n");
printf("3 Dr.shreya\n");
printf("ICU NO:5\n");
printf("available time slot 16:30PM to 24:00AM\n\n");
printf("4 Dr.sirichandana\n");
printf("ICU NO:12\n");
printf("available time slot 6:00AM to 9:00AM\n\n");

printf("enter time(!!24 hr format only!!):");
scanf("%d",&t);

printf("\ndoctor to be consulted:\n");
if(t>=900 && t<=1230)
printf("Dr.bhanu niddana,ICU:8\n");

else if(t>=1300 && t<=1630)
printf("Dr.jahnavi chenda,ICU:6\n");
  
else if(t>1630 && t<=2400)
printf("Dr.shreya,ICU:5\n");

else if(t>600 && t<900){
printf("Dr.sirichandana,ICU:12\n");
}
else
printf("SORRY NO DOCTORS AVAILABLE TO TREAT AT THIS TIME KINDLY SHIFT TO ANOTHER HOSPITAL");
break;

case 3:
printf("List of avialable doctors list at emergency wards:\n");
printf("1 Dr.Madhavi latha\n");
printf("available time slot 9:00AM to 12:30PM\n\n");
printf("2 Dr.Ranganathan\n");
printf("available time slot:13:00PM to 16:30PM\n\n");
printf("3 Dr.Rakesh mishra\n");
printf("available time slot 16:30PM to 24:00AM\n\n");
printf("5 Dr.Ramana gogula\n");
printf("available time slot 6:00AM to 9:00AM\n\n");

printf("\nenter time(!!24 hr format!!):");
scanf("%d",&t);

printf("doctor to be consulted:\n");
if(t>=900 && t<=1200)
printf("Dr.Madhavi latha,ICU:23\n\n");

else if(t>=1300 && t<=1600)
printf("Dr.Ranganathan,ICU:14\n\n");
  
else if(t>1600 && t<=2400)
printf("Dr.Rakesh mishra,ICU:17\\n");

else if(t>600 && t<900){
printf("Dr.Ramana gogula,ICU:22\n\n");
}
printf("enter type of case(legal-case/non-legalcase):");
scanf("%s",type);

if(strcmp(type,"legal-case")==0)
{
printf("\ncontact police - until then minor treatment will be given - submit details\n");
}
else if(strcmp(type,"non-legalcase")==0)
{
printf("\n\npatient successfully admitted to corresponding ICU\nwithin an hour details will be taken in reception\n\ncontact family members urgently\n");

printf("enter details of patient in emergency ward:\n\n");
printf("patient_no:");
scanf("%d",&patient_no);
getchar();
printf("Name: ");
fgets(name,sizeof(name),stdin);
name[strcspn(name,"\n")]='\0';
printf("Age:");
scanf("%d",&age);
getchar();
printf("Gender: ");
scanf("%s",gender);
printf("phone number: ");
scanf("%lld",&phone_number); 
getchar();
printf("Email: ");
fgets(Email,sizeof(Email),stdin);
printf("Address: ");
fgets(address,50,stdin);
printf("doctor consulted:");
scanf("%s",doctor);
viewE();
}
break;
default:printf("invalid choice");
}
}
void viewE(){
int pat_no;
char s[4];
printf("enter the patient no whose record has to be viewed:");
scanf("%d",&pat_no);
if(patient_no == pat_no){
printf("\nPatient Details:\n");
printf("---------------------\n");
printf("patient_no: %d\n",patient_no);
printf("Name: %s\n",name);
printf("Age: %d\n",age);
printf("Gender: %s\n",gender);
printf("phone number: %lld\n",phone_number);
printf("Email:%s\n",Email);
printf("\nAddress: %s",address);
printf("\ndoctor consulted: %s\n\n",doctor);
printf("-------------WILL SOON LET YOU KNOW THE OPERATION-REQUIREMENTS,THEN YOU CAN PAY MONEY AT BILL DESK---------------");
}
else
{
printf("invalid patient number-try entering it again:\n\n");
viewE();
}
}

void billing()
{
printf("--------------------------------------------------------------------------\n");
    printf("::ADDING SERVICES::\n");
	printf("----------------------------");
	printf("1.X-Ray\n");
	printf("Rs. 300.00\n");
	printf("2.C.T.Scan\n");
	printf("Rs.1800.00\n");
	printf("3.Urine R/E\n");
	printf("Rs. 80.00");
	printf("4.MRI\n");
	printf("Rs.1500.00\n");
	printf("5.Blood-SugarTest+ecg+cbc\n");
	printf("Rs.500.00\n");
    printf("6.derma-fungaltest");
    printf("Rs.200.00\n");
    printf("7.ultrason");
    printf("Rs.1000.00\n");
    printf("8.hearing test");
    printf("Rs.500.00\n");
    printf("9.pediatric test");
    printf("Rs.100.00\n");
    total=cons_fee;
    int d;

    printf("enter the test_no{1-x-ray}{2-ctscan},{3-urine},{4-MRI}{5-general test}{6-dermatest}{7-ultason}{8-hearing}{9-pediatric test}");
    scanf("%d",&d);
     switch(d)
     {
    case 1:total=total+300+money;
    break;//x-ray
    case 2:total=total+1800+money;
    break;//ct scan
    case 3:total=total+80+money;
    break;//urine
    case 4: //mri charge
    total = total + 1500+money;
    break;
    case 5://blood sugar,ecg,cbc
    total=total+500+money;
    break;
    case 6:
    total = total + 200+money;
    break;
    case 7:
    total = total + 1000+money;
    break;
    case 8:
    total = total + 500+money;
    break;
    case 9:
    total = total + 100 +money;
    break;
    
     default:printf("no such test");
   }
   printf("\nThe total amount=%d",total);
   printf("\nenter 1-paid,2-unpaid:");
   scanf("%d",&l);
   if(l==1){
   viewN();
   ex_it();
   }
   else
   {
   printf("please pay money to get discharged");
}
}
void blood_sugar()
{
    printf("\nenter the value of blood glucose range for of fasting test in mg/dl:");
    scanf("%f",&fasting_test);
    printf("\nenter the value of post_prandial_plasma__glucose in mg/dl:");
    scanf("%f",&post_prandial_plasma_glucose);
    cbc();

}
void cbc(){
        
    printf("\n enter count of rbc's in blood in 10^6/mm^3:");
    scanf("%f",&rbc);
    printf("\n Enter the count of wbc's in blood:");
    scanf("%f",&wbc);
    printf("\n Enter the count of platelets:");
    scanf("%f",&platelets);
    printf("\nEnter the percent of hemoglobin in blood:");
    scanf("%f",&haemoglobin);
    ecg();
}

void ecg()
{
printf("\nEnter the value of ecg:");
scanf("%d",&ec);
 k=ec;
 printf("\noutput from doctor[NORNMAL/ABNORMAL]:");
    scanf("%s",cond_gen);
    
    if(strcmp(cond_gen,"NORMAL")==0){
        printf("patient can be discharged after billing\n\n");
        pharma();
    }
    else{
        printf("come back after 2 days for further checkup");
    }

    
}

void ctscan()
{
  printf("\nenter organ:");
  scanf("%s",organ_ct);
    printf("\nCT SCAN REPORT of %s",organ_ct);
    printf("\nEnter technique used(CONTRAST/NON-CONTRAST):");
    scanf("%s",techq);
    printf("\nenter yes-(if subdural//extradural haemorrage is seen) else enter NO");
    scanf("%s",dur_ct);
    printf("\noutput from doctor[NORNMAL/ABNORMAL]:");
    scanf("%s",condition_ctscan);
    
    if(strcmp(condition_ctscan,"NORMAL")==0){
        printf("patient can be discharged after billing");
        pharma();
    }
    else{
        printf("come back after 2 days for further checkup");
    }

}
void urino()
{ 
printf("\nEnter measure of albumin in urine:");
    scanf("%f",albumin);
    printf("\nEnter pH level in urine:");
    scanf("%f",pH);
    printf("\nEnter measure of ketone in urine:");
    scanf("%f",ketone);
     printf("\nEnter measure of bilirubin in urine:");
    scanf("%f",bilirubin);
     printf("\nEnter 1 if presence  of nitrite in urine or 0 for absence:");
    scanf("%f",nitrite);

    if(nitrite == 1){
   printf("come back after 2 days for further checkup\n\n");  
    }
   if(nitrite == 0){
    printf("patient can be discharged after billing\n");
    pharma();
   }
}

void MRI(){
    printf("\nenter organ/part for MRI SCAN:");
    scanf("%s",organ_mri);
    printf("\nMRI SCAN REPORT of %s\n\n",organ_mri);
   printf("output from doctor:\n");
   printf("\nenter NORMAL(if reports are good)//ABNORMAL(if reports are malfunctional):");
   scanf("%s",condition_mri);
    if(strcmp(condition_mri,"NORMAL")==0){
    printf("patient can be discharged after billing\n");
    pharma();
    }
    else{
        printf("come back after 2 days for further checkup\n");
    }
}

void viewN()
{
int pati_no;
printf("enter the patient no whose record has to be viewed:");
scanf("%d",&pati_no);
if(patient_no == pati_no)
{
printf("\nPatient Details:\n");
printf("---------------------\n");
printf("patient_no: %d\n",patient_no);
printf("Name: %s\n",name);
printf("Age: %d\n",age);
printf("Gender: %s\n",gender);
printf("phone number: %lld\n",phone_number);
printf("Email:%s\n",Email);
printf("Address: %s\n",address);
printf("doctor consulted: %s\n",doctor);
printf("total bill = %d\n",total);
printf("\n----------discharged succesfully------------");
}
else
{
printf("invalid patient number,patient record not found\n\n");
printf("enter correct details again\n\n");
viewN();
}
}

void viewpediat(){
int pati_no;
printf("enter the patient no whose record has to be viewed:");
scanf("%d",&pati_no);
if(patient_no == pati_no){
printf("\nPatient Details:\n");
printf("---------------------\n");
printf("patient_no: %d\n",patient_no);
printf("Name: %s\n",name);
printf("Age: %d\n",age);
printf("Gender: %s\n",gender);
printf("phone number: %lld\n",phone_number);
printf("Email:%s\n",Email);
printf("Address: %s\n",address);
printf("doctor consulted: %s\n\n",doctor);
}
else
{
printf("invalid patient number,patient record not found\n\n");
printf("enter correct details again");
viewpediat();
}
}

void biopsy(){
float fung;

printf("enter fungal infection percentage:");
scanf("%f",&fung);

if(fung>=30 && fung<=70){
printf("use following creams\n");
printf("sunscreen\n");
billing();
}

if(fung>70 && fung < 100){
printf("use following creams\n");
printf("derma dew\n");
pharma();

}
if(fung>100){
printf("serious condition\n");
printf("immediately join in hospital\n");
viewN();
}
if(fung<30){
printf("condition normal\n");
pharma();

}
}

void ultrasound()
{  
    printf("enter frequency:");
    scanf("%f",&freq);
if(freq>=3 && freq<10){
    printf("normal condition\n");
    pharma();
    
}
else{
printf("abnormality-please visit hospital again after 1 day\n");
viewN();
}
}
void ent()
{
 float hear_val;

 printf("enter hearing range:");
 scanf("%f",&hear_val);
if(hear_val>=250 && hear_val<=8000)
{
    printf("normal condition\n");
    pharma();

}
else
{
printf("abnormality-please visit hospital again after 1 day\n");
viewN();
}

}

void pharma()
{


{
    int i,arr[10],a=0,b=0,c=0,d=0,e=0,f=0,num,skin[2],chi[5],wo[5],bon[5],ear[5];
  printf("----------------Pharmacy section-------------------");
    printf("enter choice(0-general,1-dermal,2-pediatric,3-gyanic,4-orthopedic,5-ENT):");
    scanf("%d",&d);
    if(d==0){
    printf("\n*BILLING OF GENERAL MEDICINES*\n");
    printf("\nEnter the quantity of each medicines (general) required in the order following below :\n");
    printf("\n1.Paracetamol");
    printf("\n2.ampicillin");
    printf("\n3.cefixime");
    printf("\n4.becool");
    printf("\n5.multivitamin");
    printf("\n6.ranitidine");
    printf("\n7.cimetidine");
    printf("\n8.desperine");
    printf("\n9.painkillers");
    printf("\n10.citrizen");
    printf("\nPlease enter the quantity int the same order as prescribed");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
  
     for(i=0;i<10;i++)
    {
      money+=med[i]*arr[i];  
    }
      printf("\nThe pharmacy bill of tablets(for general ward) = %d",money);
      billing();
    }

        else if(d==1){
        printf("\nHave you consulted the dermatology department");
        printf("\nYes=1||No=0  ---enter your response");
        scanf("%d",&a);
        if(a==1)
        {
        printf("Enter the quantity of medicines in the follwing order:");
        printf("\n1.Derma cream:");
        printf("\n2.Sunscreen:");
        printf("\nenter the quantity:");
        for(i=0;i<2;i++)
        {
        scanf("%d",&skin[i]);
        }
        for(i=0;i<2;i++)
        {
         money+=der[i]*skin[i];
        }
        }
        printf("\nbilling in derma section =%d",money);
              billing();

        }
        
        else if(d==2){
         printf("\nHave you consulted the pediatrician");
        printf("\nYes=1||No=0  ---enter your response");
        scanf("%d",&b);
        if(b==1)
        {
        printf("Enter the quantity of medicines in the follwing order:");
        printf("\n1.Cefdinir");
        printf("\n2.Cephalexin");
        printf("\n3.Pediasure");
        printf("\n4.Amoxicillin");
        printf("\n5.Azithromycin");
        printf("\nenter the quantity:");
        for(i=0;i<5;i++)
        {
        scanf("%d",&chi[i]);
        }
        for(i=0;i<5;i++)
        {
         money+=ped[i]*chi[i];
        }
        }
        printf(" Total pharma billing=%d",money);
              billing();

        }
        else if(d==3){
         printf("\nHave you consulted the Gynacology department");
        printf("\nYes=1||No=0  ---enter your response");
        scanf("%d",&c);
        if(c==1)
        {
        printf("Enter the quantity of medicines in the follwing order:");
        printf("\n1.Iron Tablets");
        printf("\n2.Annovera");
        printf("\n3.Arimidex");
        printf("\n4.Aromasin");
        printf("\n5.Women's Horlicks");
        printf("enter the quantity:");
        for(i=0;i<5;i++)
        {
        scanf("%d",&wo[i]);
        }
        for(i=0;i<5;i++)
        {
         money+=gyn[i]*wo[i];
        }
        }
        printf(" Totalbilling=%d",money);
        billing();
        }

        else if(d==4){
        printf("\nHave you consulted the Department of Othopedics");
        printf("\nYes=1||No=0  ---enter your response");
        scanf("%d",&d);
        if(d==1)
        {
        printf("Enter the quantity of medicines in the follwing order:");
        printf("\n1.Aelfrac");
        printf("\n2.Artho pak");
        printf("\n3.Orthopedic slippers");
        printf("\n4.Massage oil");
        printf("\n5.Knee & elbow patches");
        printf("enter the quantity:");
        for(i=0;i<5;i++)
        {
        scanf("%d",&bon[i]);
        }
        for(i=0;i<5;i++)
        {
         money+=ort[i]*bon[i];
        }
        }
        printf("\n Total pharma billing=%d",money);
        billing();
        }
         else if(d==5){
         printf("\nHave you consulted the ENT department");
        printf("\nYes=1||No=0  ---enter your response");
        scanf("%d",&e);
        if(e==1)
        {
        printf("Enter the quantity of medicines in the follwing order:");
        printf("\n1.Ear drops");
        printf("\n2.Nasal drops");
        printf("\n3.Oral mouth wash");
        printf("\n4.Mupirocin");
        printf("\n5.Hydrocortisone");
        printf("\nenter the quantity:");
        for(i=0;i<5;i++)
        {
        scanf("%d",&ear[i]);
        }
        for(i=0;i<5;i++)
        {
         money+=entd[i]*ear[i];
        }
        printf("Total pharma billing=%d\n\n",money);
    
        billing();
        } 
        }
}
}
void ex_it()
{
printf("\n**Our hospital also provides teleconsultation services**");
    printf("\n\nThe services are available 24/7 online");
    printf("\nTo avail these services contact :");
    printf("\ncontact no:234-4545-234/234-5454-234");
    printf("\nHope we served you well");
    printf("\n\t\t---------------- :)We heartfully wish you a healthy and happy life:)-------------------");
}