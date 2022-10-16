Program Shift_only
implicit none

integer::N,c,j,A(200)

read(*,*) N
A=0
read(*,*) (A(j),j=1,N)
c=0
do 
    do j=1,N
        if (mod(A(j),2)==0) then
            A(j)=A(j)/2
        else
            write(*,*) c
            stop
        end if
    enddo
    c=c+1
enddo
end program Shift_only