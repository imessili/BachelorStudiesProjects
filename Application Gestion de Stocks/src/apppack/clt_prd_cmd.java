package apppack;

import java.io.Serializable;
import java.util.ArrayList;
//Une class contenant tout les liste(Globale) permet a tout les class de les utiliser
public class clt_prd_cmd implements Serializable {

	private static final long serialVersionUID = 1L;
	
	public static ArrayList<client> Listc = new ArrayList<client>();
	public static ArrayList<produit> Listp = new ArrayList<produit>();
	public static ArrayList<commande> Listcmd = new ArrayList<commande>();
	
}
