# Stego

## Sådan bidrager du

Hvis du ikke har skriveadgang til repoet, skal du bruge dette flow:

1. Åbn `OskarBrown/stego` på GitHub, og klik på **Fork**.
2. Klon din fork:

   ```bash
   git clone https://github.com/DIT-BRUGERNAVN/stego.git
   cd stego
   ```

3. Opret en ny branch:

   ```bash
   git switch -c min-aendring
   ```

4. Lav dine ændringer, og commit dem:

   ```bash
   git add .
   git commit -m "Beskriv ændringen"
   ```

5. Push branchen til din fork:

   ```bash
   git push -u origin min-aendring
   ```

6. Åbn GitHub, klik på **Compare & pull request**, og opret en pull request mod `OskarBrown/stego` på branchen `main`.

Pull requesten bliver ikke oprettet automatisk. Når den er indsendt, kan ejeren gennemgå ændringerne, kommentere og merge dem.

Hvis du har skriveadgang til repoet, behøver du ikke at forke det. Opret i stedet en ny branch direkte i repoet, push branchen, og opret en pull request mod `main`.
