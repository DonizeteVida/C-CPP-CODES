#include <stdio.h>
#include <stdlib.h>

int hasAge(int *age);

int generalQuestion(const char *const question);

int wasSick();

int hasTravel();

int knowCovidsEnfermUntilPast30Days();

int firstDonate();

int quantityDonateLast12Months();

int monthsLastDonation();

char genre();

int processGenre(const char *genre, float donationAverage, int donated);

int errorMessage();

int main(int argc, char const *argv[])
{
    float mass = 0;
    int age = 0;

    printf("Digite a sua massa corporal: ");
    scanf("%f", &mass);

    if (mass < 50)
    {
        return errorMessage();
    }

    printf("Digite sua idade: ");
    scanf("%d", &age);

    if (!hasAge(&age))
    {
        return errorMessage();
    };
    if (wasSick())
    {
        return errorMessage();
    }

    if (hasTravel())
    {
        return errorMessage();
    }

    if (knowCovidsEnfermUntilPast30Days())
    {
        return errorMessage();
    }
    float donatedAverage = 0;
    int donated = 0;
    if (!firstDonate())
    {
        int localDonated = quantityDonateLast12Months();
        donated = localDonated;
        if (localDonated > 0)
        {
            int qtdMonthsLastDonation = monthsLastDonation();
            int lastDonationInterval = 12 - qtdMonthsLastDonation;
            donatedAverage = (float)lastDonationInterval / localDonated;
        }
    }

    char localGenre = genre();
    if (processGenre(&localGenre, donatedAverage, donated))
    {
        printf("APTO: Agende um horário para triagem completa.\n");
        return 1;
    }
    else
    {
        return errorMessage();
    }
    return 0;
}

int generalQuestion(const char *const question)
{
    char *response = (char *)malloc(1);
    const char success = 's';
    printf(question);
    fflush(stdin);
    scanf("%c", response);

    if (*response == success)
    {
        return 1;
    }
    return 0;
}

int hasAge(int *age)
{
    if (*age < 16)
    {
        return 0;
    }

    if (*age < 18)
    {
        return generalQuestion("Possui consentimento dos pais?:");
    }

    if (*age > 60)
    {
        return generalQuestion("Voce já foi doador antes?:");
    }

    return 1;
}

int wasSick()
{
    return generalQuestion("Voce esteve doente nos ultimos meses?: ");
}

int hasTravel()
{
    return generalQuestion("Voce teve alguma viagem nos ultimos 30 dias?: ");
}

int knowCovidsEnfermUntilPast30Days()
{
    return generalQuestion("Teve contato com alguem suspeito ou confirmado de covid, nos ultimos 30 dias?: ");
}

int firstDonate()
{
    return generalQuestion("É sua primeira doacao?: ");
}

int quantityDonateLast12Months()
{
    int quantity = 0;
    printf("Digite a quantidade doada nos ultimos 12 meses: ");
    fflush(stdin);
    scanf("%d", &quantity);
    return quantity;
}

int monthsLastDonation()
{
    int quantity = 0;
    printf("Quantos meses desde sua ultima doacao?: ");
    fflush(stdin);
    scanf("%d", &quantity);
    return quantity;
}

char genre()
{
    char gen;
    printf("Digite o seu genero:\nM para masculino.\nF para feminino.\n");
    fflush(stdin);
    scanf("%c", &gen);
    return gen;
}

int processGenre(const char *genre, float donationAverage, int donated)
{
    if (*genre == 'M')
    {
        if (donated > 4 || donationAverage < 2)
        {
            return 0;
        }
        return 1;
    }
    else
    {
        if (donated > 3 || donationAverage < 3)
        {
            return 0;
        }

        return !generalQuestion("Está grávida ou amamentando?: ");
    }
}

int errorMessage()
{
    printf("Sinto muito. Voce não está apto.\n");
    return 0;
}
