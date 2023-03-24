package apppack;
import java.util.ArrayList;

public class List_produit{
	 
	
	public List_produit()
	  {
		
	     }
	
	//Methode ajout de produit
	public boolean Ajout_produit(produit prod){
	    clt_prd_cmd.Listp.add(prod);
	    return true;
			
	   }
	
	//Methode supprision de produit
	public boolean Supp_produit(String Id_prod) {
	      for (produit element : clt_prd_cmd.Listp){
	         if (Id_prod.equalsIgnoreCase(element.getId_produit())){
	        	 clt_prd_cmd.Listp.remove(element);
	        	 return true;
	         }
	      }
	      return false;
	}
	
	//Methode modification de produit
	public boolean Modifier_produit(String Id_prod,String nomp,String catp,int qtep,float prixp,String caracp){
	    
		for (produit element : clt_prd_cmd.Listp){
	         if (Id_prod.equalsIgnoreCase(element.getId_produit())){
	        	 element.setId_produit(Id_prod);
	        	 element.setNom_produit(nomp);
	        	 element.setCategorie(catp);
	        	 element.setQuantite(qtep);
	        	 element.setPrix(prixp);
	        	 element.setCarac_produit(caracp);
	        	 return true;
	         }
	      }
	      return false;
	}
	
	//Methode virification de l'existence de produit
	public boolean Existe_prd(String Id_prd) {
		for(produit prd : clt_prd_cmd.Listp) {
			if (prd.getId_produit().equals(Id_prd)) return true;		
		}
		return false;
	}
	
	//Methode affichage de produit
	public ArrayList<produit> Afficher_List_Produit() {
           return clt_prd_cmd.Listp;
	   }
	
}
