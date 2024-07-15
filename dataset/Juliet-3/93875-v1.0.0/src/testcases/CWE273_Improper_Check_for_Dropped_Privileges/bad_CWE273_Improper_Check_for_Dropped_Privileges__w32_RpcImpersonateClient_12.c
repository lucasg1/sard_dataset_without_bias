void FUN0()
{
    if(globalReturnsTrueOrFalse())
    {
<START>
        RpcImpersonateClient(0);
<END>
    }
    else
    {
        if (RpcImpersonateClient(0) != RPC_S_OK)
        {
            exit(1);
        }
    }
}
