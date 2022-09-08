void main(){

    int i=0,n;
    while(i==0){
    	
    	printf("************ Queue Operations ***********************\n\n");
    	  printf("1) Enqueue A Number\n2) Dequeue A Number\n3) Count Number Of Entries");
        printf("\n4) Show Queue\n5) Exit\n\n");
        printf("\nEnter Your choice : ");
        scanf("%d",&n);
        printf("\n");
      
        switch(n){
            case 1: 
                    enqueue();
                    break;
            case 2: Dequeue();
                    break;
            case 3: Count();
                    break;
            case 4: Show();
                    break;
            case 5: i=1;
                    break;
            default : printf("You Entered wrong Choice");
                    break;
        }
    }
