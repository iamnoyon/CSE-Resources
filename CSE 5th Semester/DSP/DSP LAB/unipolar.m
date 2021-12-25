h=[0 1 1 1 0 0 0 1 1 0 1];
z=[];
fs=100;
ts=1/fs;
t=0:ts:length (h)-ts;
s1=ones(1,fs)
level1=0;
level2=-1;
figure(1)
 for n=1:length(h)
    if h(n)==0
    level=level1;
    z=[z s1*level];
    else
        level=level2;
        z=[z s1*level];
        end
        text(n-0.5,1.5,num2str(h(n)),'for
        hold on
    end
    plot(t,z,'linewidth',2);
    xlabel('time (s)','fontsize',14);
    ylabel('signal level');
    axis([0 10 -2 2])
    grid on
