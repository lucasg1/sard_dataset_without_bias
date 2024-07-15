static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    FILE * data;
    data = NULL;
    data = fopen("file.txt", "w+");
    if(staticTrue)
    {
<START>
        fclose(data);
<END>
    }
}
