static int staticFive = 5;
void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(staticFive==5)
    {
<START>
        fclose(data);
<END>
    }
}
