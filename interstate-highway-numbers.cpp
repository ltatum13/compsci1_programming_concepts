highway_number = int(input())

if highway_number >= 1 and highway_number <= 99:
    primary_number = highway_number
    odd_or_even = highway_number % 2
    if odd_or_even == 0:
        print('I-'+ str(primary_number) + ' is primary, going east/west.')
    else:
        print('I-' + str(primary_number) + ' is primary, going north/south.')

elif highway_number >= 100 and highway_number <= 999:
    auxiliary_number = highway_number
    service_number = auxiliary_number % 100
    if auxiliary_number == 200:
        print(str(auxiliary_number) + ' is not a valid interstate highway number.')
    else:
        if (service_number % 2) == 0:
            print('I-'+ str(auxiliary_number) + ' is auxiliary, serving I-' + str(service_number) + ', going east/west.')
        else:
            print('I-'+ str(auxiliary_number) + ' is auxiliary, serving I-' + str(service_number) + ', going north/south.')

else:
    print(highway_number, 'is not a valid interstate highway number.')