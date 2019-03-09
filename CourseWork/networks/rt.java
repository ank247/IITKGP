 /***** Router-Table Assigning.*****/
 /* An Integer Programming Problem. */

 import java.io.*;
 import java.net.*;

 class RouterTable
  {
    public static void main(String[] args)
     {
        int n = 100;                                            // Total nos. of Nodes.
        int[] Nodes = {14, 15, 18, 21, 27, 45, 59, 70, 76, 91};             // Total nos. of RouterTable in Communication.
     //   list RouterTable = new list();                        // RouterRange Assigning to listedRouters.
        int[][] listedRouter = new int[100][2];                 // listedRouter Matrix.     
        int lastByte = 0;                                       
        System.out.println("\n RouterTable is Ready.");
        int[] FrameSize = {410, 550, 430, 690, 450, 230, 210, 210, 110, 100};  // Input FrameSize. 
        int i, j = 0, k = 0, count = 0;
        while(count < 10)                                        // count = 7, Nodes in Communication.
         {
            for(i = 0; i < 10; i++)
             {
               if(listedRouter[i][0] == 0)                      // Checking Table Vacancy.
                {
                   k = 1000 * j + 10 * (Nodes[i]-1);            // Slot Assigned. 
                //   System.out.print(k + " ");
                }
                if(k > lastByte)                                // Slot Check.
                 {
                    listedRouter[i][0] = k;                     // Slot Initiation.
                    System.out.print(listedRouter[i][0]+ " ");
                    listedRouter[i][1] = listedRouter[i][0] + FrameSize[i];  // Slot End.
                    System.out.println(listedRouter[i][1] + " ");
                    lastByte = listedRouter[i][1];                           // lastRange Assigned.
                 //   System.out.print(lastByte + " ");
                    count++;
                    System.out.print(count + " ");
                 }
                 // listedRouter[i][0] = ;           
                 // listedRouter[i][1] = listedRouter[i][0] + FrameSize[i];
                 // lastByte = listedRouter[i][1];    
             }
             j++;
  //            System.out.println(j + " ");
         }
     }     
  }
