static int staticFive = 5;
void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(staticFive==5)
    {
<START>
<END>
        ; 
    }
}
