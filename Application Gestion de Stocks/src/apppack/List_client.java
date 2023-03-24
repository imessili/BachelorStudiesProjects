package apppack;


import java.util.ArrayList;

public class List_client {
    
	//Constricture
	public List_client()
	  {
	     }
	
   //Methode ajoute de client
	public boolean Ajout_client(client client){
	    clt_prd_cmd.Listc.add(client);
	    return true;
			
	   }
	//Methode supprision de client
	public boolean Supp_client(String Id_client) {
	      for (client clt : clt_prd_cmd.Listc){
	         if (Id_client.equalsIgnoreCase(clt.getId_client())){
	        	 clt_prd_cmd.Listc.remove(clt);
	        	 return true;
	         }
	      }
	      return false;
	}
	//Methode modification de client
	public boolean Modifier_client(String Id_client, String nomc,String adrc,String telph,int nbra_c){
		
		for (client clt : clt_prd_cmd.Listc){
	         if (Id_client.equalsIgnoreCase(clt.getId_client())){
	        	 //clt.setId_client(Id_client);
	        	 clt.setNom_client(nomc);
	        	 clt.setAddresse_client(adrc);
	        	 clt.setTel_client(telph);
	        	 clt.setNbr_achat(nbra_c);
	        	 return true;
	         }
	      }
	      return false;
	}
	//Methode affichage de client
	public ArrayList<client> Afficher_List_client() {
		    
       return clt_prd_cmd.Listc;
       
	   }
	//Methode virification de l'existence de client
	public boolean Existe_client(String Id_client) {
		for(client clt : clt_prd_cmd.Listc) {
			if (clt.getId_client().equals(Id_client)) return true;		
		}
		return false;
	}
	//Methode renvoi l'etat de fidalisation de client
public String Etat_client(String Id_client){
		String s = null ;
		for (client clt : clt_prd_cmd.Listc){
			
	         if (Id_client.equalsIgnoreCase(clt.getId_client())){
	        	 if(clt.getNbr_achat()>=5) {
	        		 s = "Ce Client est fidele";
	        		 return s ;
	        		 
	        	 }else {
	        		 s="Ce Client n'est pas encore fidele";
	        		 return s;
	        		 
	        	      }
	        	 
	         }
	      }
		return s ;
	}

public String cartefdlt(String Id_client) {
	for(client clt : clt_prd_cmd.Listc) {
		if (clt.getId_client().equals(Id_client)) return clt.toString();	
	}
	return "Client n'existe pas";
}
}
