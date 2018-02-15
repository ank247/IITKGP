/***** Threading in Network. *****/

  import java.io.*;
  import java.net.*;

  class server
   {
      public static void main(String[] args) throws IOException
       {
//           ServerSocket a = new ServerSocket(9876);                      /* Socket. */
//           System.out.println("Address Binding Over:");
//           Socket b = a.accept();                                        /* Accept.*/
//           System.out.println("Got Client:");                           
//           System.out.println(b);
//           f x = new f();                                                /* */
//           Thread m;
//           x = new f();
//           m = new Thread(x);
//           x.d = new DataOutputStream(b.getOutputStream());
//           m.start();          
//           a.close();

//Server Read.----------------------------------------------------------------------------------
            
           Socket b1 = new Socket(InetAddress.getLocalHost(), 9876);
           String y1 = new String();
           DataInputStream y = new DataInputStream(b1.getInputStream());     
           y1 = y.readUTF();
           System.out.println(y1);
           b1.close();
       }
   }
// f:---------------------------------------------------------------------------------------

   class f implements Runnable
    {
       DataOutputStream d;
       public void run()
        {
          try{
                d.writeUTF("RamPrasad ");
             }
             catch(Exception e){}
        }
    }   

// ClientSide---------------------------------------------------------------------------------------- 

  class client
   {
      public static void main(String[] args) throws IOException
       {
//          Socket p = new Socket(InetAddress.getLocalHost(), 9876);     /* Connect SocketAddress.*/
//          System.out.println(p + "ct");
//          DataInputStream q = new DataInputStream(p.getInputStream());
//          String r = new String(q.readUTF());
//          System.out.println("Received:" + r);
//          p.close();
//Client write.-------------------------------------------------------------------------------------------
          ServerSocket p1 = new ServerSocket(9876);                              /* New Socket Established.*/       
          System.out.println(p1);
          Socket q1 = p1.accept();
          System.out.println(q1);
          f x = new f();
          Thread m = new Thread(x);
      //   r = writeUTF("Ram is Prasad.");
      //    System.out.println(x);
      //    System.out.println(m);
          x.d = new DataOutputStream(q1.getOutputStream());     
          m.start();
          p1.close();
       }
   }

//------------------------------------------------------------------------------------------
