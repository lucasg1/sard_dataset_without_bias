void FUN0()
{
    FILE * data;
    FILE * *dataPtr1 = &data;
    FILE * *dataPtr2 = &data;
    data = NULL; 
    {
        FILE * data = *dataPtr1;
        data = fopen("BadSource_fopen.txt", "w+");
        fclose(data);
        *dataPtr1 = data;
    }
    {
        FILE * data = *dataPtr2;
<START>
        fclose(data);
<END>
    }
}
