package apppack;

import java.util.ArrayList;

public class List_commande  {
	
     private String lp_complete1="",lp_complete2="";
	 private client client_cmd;
	 private float mnt=0;
	 private float mntttl=0;
	 
	//Constricture
	public List_commande()
	  {
		  }
	 //Methode ajoute de commande
	public boolean Ajoute_commande(int num_cmd,String id_c,ArrayList<String> idprds,String date_cmd){
		
		for (client clt : clt_prd_cmd.Listc){
        	if(id_c.equalsIgnoreCase(clt.getId_client())) {	
        		client_cmd = clt;
        		clt.setNbr_achat(clt.getNbr_achat()+1);
        		mntttl=clt.getmnt_achat_ttl();
        		break;
        	     }
	         }
		
		if(client_cmd==null) {return false;
		}else {
			
			for (String idprd : idprds){
				
				for (produit prd : clt_prd_cmd.Listp){
					
		            if(idprd.equalsIgnoreCase(prd.getId_produit())) {
		                   
		            	 lp_complete1 = lp_complete1 +"****Id prduit: "+prd.getId_produit()+"\n****Nom produit: "+prd.getNom_produit()+"\n****Prix: "+prd.getPrix()+"\n";
		        		 mnt = mnt + prd.getPrix();
		        		 prd.setAchat(prd.getAchat()+1);
		        		 prd.setQuantite(prd.getQuantite()-1);
		        	     }
			         } 

				for (client clt : clt_prd_cmd.Listc){
		        	if(id_c.equalsIgnoreCase(clt.getId_client())) {	
		        		clt.setmnt_achat_ttl(mntttl+mnt);
		        		break;
		        	     }
			         }
			
		   
			
		}	
			if(mntttl>=10000.00) {
				mnt = (float) (mnt * 0.95);
				
				for (client clt : clt_prd_cmd.Listc){
		        	if(id_c.equalsIgnoreCase(clt.getId_client())) {	
		        		clt.setmnt_achat_ttl(0);
		        		break;
		        	     }
			         }
			}
			commande nvcmd = new commande(num_cmd,client_cmd,lp_complete1,date_cmd,mnt);
			clt_prd_cmd.Listcmd.add(nvcmd);
			 return true;
			
	   }
	}
	
	//Methode supprision de commande
	public boolean Supp_commande(int numcmd) {
	
	      for (commande cmd : clt_prd_cmd.Listcmd){
	         if (numcmd == cmd.getNum_Commande()){
	        	 clt_prd_cmd.Listcmd.remove(cmd);
	        	 return true;
	         }
	      }
	      return false;
	}
	//Methode modification de commande
	public boolean Modifier_commande(int num_cmd,String id_c,ArrayList<String> idprds,String date_cmd){
	    
          for (String idprd : idprds){
			
			for (produit prd : clt_prd_cmd.Listp){
				
	            if(idprd.equalsIgnoreCase(prd.getId_produit())) {
	                   
	            	 lp_complete2 = lp_complete2 +"****Id prduit: +"+prd.getId_produit()+"\n****Nom produit: "+prd.getNom_produit()+"\n****Prix: "+prd.getPrix()+"\n";
	        		
	        	     }
		         }
			}
			
			if(lp_complete2.equalsIgnoreCase("")) return false;
			
			for (client clt : clt_prd_cmd.Listc){
	        	if(id_c.equalsIgnoreCase(clt.getId_client())) {	
	        		client_cmd = clt;
	        		break;
	        	     }
		         }
			
			if(client_cmd==null) return false;
			
		   for (commande cmd : clt_prd_cmd.Listcmd){
			
        	   if(num_cmd == cmd.getNum_Commande()) {
        		  cmd.setCmd_client(client_cmd);
                  cmd.set_Cmd_Listp(lp_complete2);
        		  cmd.setDate_cmd(date_cmd);
        		  cmd.setMontant_cmd(mnt);
        		  break;	
        	     }
	         }
	return true;
	      }	
	
	//Methode affichage de commande
	public ArrayList<commande> Afficher_List_Commande() {
        return clt_prd_cmd.Listcmd;
	   }
	//Methode virification de produit le plus achter
	public produit prd_pc() {
		produit p = clt_prd_cmd.Listp.get(0);
		
		for(produit prd : clt_prd_cmd.Listp) {
			
			if (prd.getAchat() > p.getAchat() ) {
				
				p=prd;
				
			}		
		}
		return p;
	}
	
	//Methode virification de produit le moins achter
	public produit prd_mc() {
		produit p = clt_prd_cmd.Listp.get(0);
		
		for(produit prd : clt_prd_cmd.Listp) {
			
			if (prd.getAchat() < p.getAchat() ) {
				
				p=prd;
				
			}		
		}
		return p;
	}
	
	//Methode virification de l'existence de commande
	public boolean Existe_cmd(int num_cmd) {
		for(commande cmd : clt_prd_cmd.Listcmd) {
			if (cmd.getNum_Commande()== num_cmd) return true;		
		}
		return false;
	}
	
}
