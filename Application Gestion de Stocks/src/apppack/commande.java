package apppack;

import java.io.Serializable;

public class commande implements Serializable {
  
	 
	private static final long serialVersionUID = 1L;

	private int num_commande;

	   private client cmd_client;
	   
	   private String cmd_Listp ;
	   
	   private String date_cmd; 

	   private float montant_cmd;
	   
	   

	   //Accesseurs

	   public int getNum_Commande() {

	       return this.num_commande;

	   }

	   public client getCmd_client() {

	      return this.cmd_client;

	   }

	   public String get_Cmd_Listp() {

	       return this.cmd_Listp;

	   }

	   public String getDate_cmd() {

	       return this.date_cmd;

	   }
       
	   public float getMontant_cmd() {

	       return this.montant_cmd;

	   }
	   //Modificateurs

	   public void setNum_commande(int num_commande) {

	       this.num_commande = num_commande;

	   }

	   public void setCmd_client(client cmd_client) {


	 
	       this.cmd_client = cmd_client;

	   }

	   public void set_Cmd_Listp(String cmd_Listp ) {
	      this.cmd_Listp = cmd_Listp;

	   }

	   public void setDate_cmd(String date_cmd) {

	       this.date_cmd = date_cmd;

	   }
       
	   public void setMontant_cmd(float montant_cmd) {

	       this.montant_cmd = montant_cmd;

	   }

	   public commande(int num_commande, client cmd_client, String cmd_Listp, String date_cmd,float montant_cmd){
		   this.num_commande = num_commande;
		   this.cmd_client = cmd_client;
		   this.cmd_Listp = cmd_Listp;
		   this.date_cmd = date_cmd;
		   this.montant_cmd = montant_cmd;
	   }
	   
	   public String toString()
	   {
	   	return "[ num_commande: " +this.num_commande + "\ncmd_client: \n"+ this.cmd_client + "\n cmd_Listp: \n"+this.cmd_Listp + "\n date_cmd: "+ this.date_cmd + " montant_cmd: " + this.montant_cmd+"\n___________________________________________________\n";
	                    }
	   
}
