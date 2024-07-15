static int staticFive = 5;
void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("BadSource_fopen.txt", "w+");
    if(staticFive==5)
    {
<START>
        data = fopen("BadSink_fopen.txt", "w+");
<END>
        if (data != NULL)
        {
            fclose(data);
        }
    }
}
