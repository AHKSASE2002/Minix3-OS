# Minix3-OS
CSE_335-Operating-systems-MINIX3-V3.3.0-Project
Note: source code is setup on default scheduler
Changing scheduling type:
got to home directory

 #cd /home

then run the following for each scheduler

Default :                   #sh def.txt
Priority:                   #sh prio.txt
Round-Robin:                #sh rr.txt
Shortest-Job-First:         #sh sjf.txt
Multilevel-Feedback:        #sh mlfb.txt
File-System-Implement:      #sh req4.txt
#Readme (configuration)

#cp [OPTION] Source Destination
#Default:

cp /home/Scheduling/def/schedule.c /usr/src/minix/servers/sched/schedule.c ; 
cp /home/Scheduling/def/config.h /usr/src/minix/include/minix/config.h ; 
cp /home/Scheduling/def/schedproc.h /usr/src/minix/servers/sched/schedproc.h ; 
cp /home/Scheduling/def/proto.h /usr/src/minix/servers/sched/proto.h ; 
cp /home/Scheduling/def/super.h /usr/src/minix/fs/mfs/super.h ; 
cp /home/Scheduling/def/super.c /usr/src/minix/fs/mfs/super.c ; 
cd /usr/src/releasetools ; 
make hdboot ; 
reboot
#Priority:

cp /home/Scheduling/prio/schedule.c /usr/src/minix/servers/sched/schedule.c ; 
cd /usr/src/releasetools ; 
make hdboot ; 
reboot
#Round-Robin:

cp /home/Scheduling/rr/schedule.c /usr/src/minix/servers/sched/schedule.c ; 
cp /home/Scheduling/rr/config.h /usr/src/minix/include/minix/config.h ; 
cp /home/Scheduling/rr/schedproc.h /usr/src/minix/servers/sched/schedproc.h ; 
cd /usr/src/releasetools ; 
make hdboot ; 
reboot
#Shortest-Job-First:

#cp /home/Scheduling/sjf/new/usr/src /usr/src/ ; 
#cd /usr/src/releasetools ; 
#make hdboot ; 
#reboot
#Multilevel-Feedback:

cp /home/Scheduling/mlfb/schedule.c /usr/src/minix/servers/sched/schedule.c ; 
cp /home/Scheduling/mlfb/config.h /usr/src/minix/include/minix/config.h ; 
cp /home/Scheduling/mlfb/schedproc.h /usr/src/minix/servers/sched/schedproc.h ; 
cp /home/Scheduling/mlfb/proto.h /usr/src/minix/servers/sched/proto.h ; 
cd /usr/src/releasetools ; 
make hdboot ; 
reboot
#File-System-Implement:

cp /home/Requirment4/super.h /usr/src/minix/fs/mfs/super.h ; 
cp /home/Requirment4/super.c /usr/src/minix/fs/mfs/super.c ; 
cd /usr/src/releasetools ; 
make hdboot ; 
reboot
