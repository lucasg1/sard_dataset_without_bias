void FUN0()
{
    twoIntsStruct * data;
    data = NULL; 
    data = (twoIntsStruct *)malloc(1*sizeof(twoIntsStruct));
    while(1)
    {
        if (data != NULL)
        {
            data[0].intOne = 1;
            data[0].intTwo = 1;
            printStructLine(&data[0]);
            free(data);
        }
        break;
    }
}
