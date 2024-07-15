static int staticFive = 5;
void FUN0()
{
    FILE * data;
    data = NULL; 
    if(staticFive==5)
    {
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
    }
    if(staticFive==5)
    {
<START>
        fclose(data);
<END>
    }
}
