# Vasil-Simulator-Installazione Windows

## Scarica git per Windows
https://git-scm.com/downloads/win
adesso Windows ha setup solitamente strani penso che basti questo (io sono su linux)






## Clona la repo sul tuo pc

***Copia l'indirizzo htpp/...***

copia https://github.com/TheYakDev/Vasil-Simulator.git che trovi su code in alto a sinistra della div dei file
<img width="934" height="434" alt="image" src="https://github.com/user-attachments/assets/7ee80490-b1b3-478e-9bf3-bb3095135d88" />


### **Vai su powershell**(non cmd)
puoi fare copia incolla e cambiare qualcosa se serve.

setup base git
```BASH
 git config --global user.name "Emanuele Durante"
 git config --global user.email DuranteQuelPeriodo@tuaEmail.com
```

Qua scrivi questo semplice comando penso che lo puoi copiare (se non funziona metti htpp appena copiato)

```BASH
cd Desktop//
git clone https://github.com/TheYakDev/Vasil-Simulator.git 
```

Questo comando ha creato una cartella Vasil-Simulator nel tuo Desktop, qua potrai modificare il codice a tuo piacimento senza intaccare quello della repo.
Quando farai cambiamenti che vanno bene a entrabi(o a di più chi lo sa) 
Faraì

```BASH
git add .
git remote add origin https://github.com/TheYakDev/Vasil-Simulator.git
git push --set-upstream origin main
```

### Ti lascio qualche link di doc utili
https://docs.github.com/en/get-started/using-git/about-git#basic-git-commands -basi git/github

https://git-scm.com/book/it/v2/Per-Iniziare-First-Time-Git-Setup -doc italiano setup iniziale git

https://www.geeksforgeeks.org/git/install-git-on-windows/ -guida istallazione git per windows



comuque su linux ci sono molti meno passaggi lol se leggi questo ricordami di parlarti per una wsl.
