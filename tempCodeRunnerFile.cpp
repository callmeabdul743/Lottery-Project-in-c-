num=rand()%100+1;
        //remove duplicy
        for(int j=0; j<=a; j++){
            if(num==person[a]){
                j=0;
                num=rand()%100+1;
            }
        }
        person[a]=num;