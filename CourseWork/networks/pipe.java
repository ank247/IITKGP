/***** Detection of Broken-Pipe in Transmission Channel.*****/

import java.net.*;
import java.io.*;

class server
  {
     public static void main(String[] args) throws IOException
      {
         ServerSocket a = new ServerSocket(9886);
         System.out.println("Address ");
         Socket b = a.accept();
         DataOutputStream c = new DataOutputStream(b.getOutputStream());
         String d = new String("RamPrasad");
         int i;
         for(i = 0; i < 3; i++)
          {
            c.writeUTF(d + "Ram");
            try{Thread.sleep(1000);} catch(Exception e){}
         System.out.println(i);
          }
    //      String e = new String();
            try{Thread.sleep(10000);} catch(Exception e){}
            c.writeUTF(d + "hari");
          a.close();
      }
  }
  class client
   {
     public static void main(String[] args) throws IOException
      {
        Socket p = new Socket(InetAddress.getLocalHost(), 9886);
        DataInputStream q = new DataInputStream(p.getInputStream());
        int i;
        for(i = 0; i < 5; i++)
          {
             String r = new String(q.readUTF());
             try{Thread.sleep(2000);}  catch(Exception e){}
             System.out.println(r);
 //          String s = new String();
          }
             try{Thread.sleep(2000);}  catch(Exception e){}
 //         String s = new String(q.writeUTF(r));
 //         sleep(1000);
          p.close();
      }
   }
