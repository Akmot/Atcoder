program coins
    implicit none    
    integer::A,B,C,X
    integer::cnt,i,j,k

    read(5,*)A
    read(5,*)B
    read(5,*)C
    read(5,*)X

    cnt=0
    do i=0,A
        i=i+1
        do j=0,B
            j=j+1
            do k=0,C
                k=k+1
                if(500*i +100*j + 50*k == X)then
                    cnt =cnt+1
                endif
            enddo
        enddo
    enddo
    write(6,*) cnt

end program coins